#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <bitset>
#include <queue>

//from IBM
static signed char m_EBCDIC[] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 
                                 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 
                                 0x1C, 0x1D, 0x1E, 0x1F, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 
                                 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
                                 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 
                                 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x50, 0x51, 0x52, 0x53, 
                                 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F, 0x60, 0x61, 
                                 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F, 
                                 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7A, 0x7B, 0x7C, 0x7D, 
                                 0x7E, 0x7F, 0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 
                                 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 
                                 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 
                                 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 
                                 0xB6, 0xB7, 0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, 0xC0, 0xC1, 0xC2, 0xC3, 
                                 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 
                                 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7, 0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF, 
                                 0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 
                                 0xEE, 0xEF, 0xF0, 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7, 0xF8, 0xF9, 0xFA, 0xFB, 
                                 0xFC, 0xFD, 0xFE, 0xFF};
//from IBM                           
static signed char m_rASCII[] = {0x00, 0x01, 0x02, 0x03, 0x1A, 0x09, 0x1A, 0x7F, 0x1A, 0x1A, 0x1A, 0x0B, 0x0C, 0x0D, 
                                 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x1A, 0x1A, 0x08, 0x1A, 0x18, 0x19, 0x1A, 0x1A, 
                                 0x1C, 0x1D, 0x1E, 0x1F, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x0A, 0x17, 0x1B, 0x1A, 0x1A, 
                                 0x1A, 0x1A, 0x1A, 0x05, 0x06, 0x07, 0x1A, 0x1A, 0x16, 0x1A, 0x1A, 0x1A, 0x1A, 0x04, 
                                 0x1A, 0x1A, 0x1A, 0x1A, 0x14, 0x15, 0x1A, 0x1A, 0x20, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 
                                 0x1A, 0x1A, 0x1A, 0x1A, 0x5B, 0x2E, 0x3C, 0x28, 0x2B, 0x21, 0x26, 0x1A, 0x1A, 0x1A, 
                                 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x5D, 0x24, 0x2A, 0x29, 0x3B, 0x5E, 0x2D, 0x1A, 
                                 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x7C, 0x2C, 0x25, 0x5F, 0x3E, 0x3F, 
                                 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x60, 0x3A, 0x23, 0x40, 0x27, 
                                 0x3D, 0x22, 0x1A, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x1A, 0x1A, 
                                 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F, 0x70, 0x71, 0x72, 
                                 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x7E, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 
                                 0x79, 0x7A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 
                                 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x7B, 0x41, 0x42, 0x43, 
                                 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x7D, 0x4A, 
                                 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x50, 0x51, 0x52, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 
                                 0x5C, 0x1A, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x1A, 0x1A, 0x1A, 0x1A, 
                                 0x1A, 0x1A, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x1A, 0x1A, 
                                 0x1A, 0x1A, 0x1A, 0x1A};
                                 
class Protolayer
{
   std::vector<int> k1v_traceRoute;
   unsigned int u4_preLength, u4_bitmapLength;
   std::queue<bool> k1q_bitmap;
   std::vector<std::string> kzv_fields;
   
  public:
   //s_ show, d_ decode, f_ feed, c_ convert
   void f_PreDataSize(unsigned int pu4_lpre, unsigned int pu4_lbit);
   void s_ByteBits(const char & p1r_val) const;
   void s_BitmapBits(const std::string & pzr_val) const;
   void s_bitmap();
   void s_TracRoute() const;
   void s_decFields() const;
   unsigned int d_FieldLength(const unsigned int & p4r_pos, const std::string & pzr_netMsg) const;
   bool d_netData(const std::string & pzr_netMsg);
   void f_route(const std::string & pzr_dip);
   void f_bitmat(const std::string & pzr_bitmap);
   //-------------------------------------------------------
   void c_EBCDIC_to_ASCII(const std::string & pzr_msg) const;
};

/**
 * s_decFields method which'll show the actual decoded fields
 * @return void
 */
void Protolayer::s_decFields() const
{
   for(std::vector<std::string>::const_iterator kz_str = kzv_fields.begin(); kz_str != kzv_fields.end(); ++kz_str)
      std::cout << " - " << *kz_str << std::endl;
};

/**
 * s_bitmap method which'll show the actual unpacked bitmap bit status
 * @return void
 */
void Protolayer::s_bitmap()
{
   if(k1q_bitmap.empty())
      return;
   
   std::cout << "[INFO s_bitmap]" << std::endl;
   int lsz = k1q_bitmap.size();
   for(int i = 0; i < lsz; ++i)
   {
      std::cout << "|" << k1q_bitmap.front();
      k1q_bitmap.push(k1q_bitmap.front());
      k1q_bitmap.pop();
   }
   std::cout << std::endl;
};

/**
 * f_bitmat method which fill the internal queue container with bits value of given bitmap
 * @param pzr_bitmap const string reference, is the actual ASCII bitmap
 * @return void
 */
void Protolayer::f_bitmat(const std::string & pzr_bitmap)
{
   char c1_B;
   for(unsigned short u2l_mN = 0; u2l_mN < pzr_bitmap.size(); ++u2l_mN)
   {
      c1_B = pzr_bitmap[u2l_mN];
      if(pzr_bitmap[u2l_mN] > 96)
         c1_B = pzr_bitmap[u2l_mN] - 87;
      else if(pzr_bitmap[u2l_mN] > 64)
         c1_B = pzr_bitmap[u2l_mN] - 55;

      k1q_bitmap.push((bool)(c1_B & 0x08));
      k1q_bitmap.push((bool)(c1_B & 0x04));
      k1q_bitmap.push((bool)(c1_B & 0x02));
      k1q_bitmap.push((bool)(c1_B & 0x01));
   }
};

/**
 * c_EBCDIC_to_ASCII method for translating EBCDIC string into ASCII
 * @param pzr_msg const EBCDIC string reference
 * @return void
 */
void Protolayer::c_EBCDIC_to_ASCII(const std::string & pzr_msg) const
{
   if(!pzr_msg.size() || pzr_msg.size() % 2)
      return;
   
   std::string s_converted;
   int sub_nibloop, il;
   char m_idx, m_tmp;
   for(size_t s_str = 0; s_str < pzr_msg.size(); m_idx = 0x00)
   {
      for(sub_nibloop = 0; sub_nibloop < 2; ++sub_nibloop, ++s_str)
      {
         if(pzr_msg[s_str] > 96)
            m_tmp = pzr_msg[s_str] - 87;
         else if(pzr_msg[s_str] > 64)
            m_tmp = pzr_msg[s_str] - 55;
         else if(pzr_msg[s_str] > 47)
            m_tmp = pzr_msg[s_str] - 48;
         else
            return;
         
         m_idx = (sub_nibloop) ? (m_idx | (m_tmp & 0x0F)) : ((m_tmp << 4) & 0xF0);
      }
      for(il = 0; il < 256; ++il)
      {
         if(m_EBCDIC[il] == m_idx)
            s_converted.push_back(m_rASCII[il]);
      }
   }
   
   std::cout << s_converted << std::endl;
};

/** 
 * f_PreDataSize method for feeding the length value of pre-fields
 * @param pu4_lpre unsigned int as pre-length
 * @param pu4_lbit unsigned int as pre-length of bitmap
 * @return void
 14500
 */
void Protolayer::f_PreDataSize(unsigned int pu4_lpre, unsigned int pu4_lbit)
{
   u4_preLength = pu4_lpre;
   u4_bitmapLength = pu4_lbit;
};

/**
 * d_netData function which decode the netData in order to extract the matchingKey
 * @param pzr_netMsg const string reference, netdata
 * @return bool, true in case of success
 */
bool Protolayer::d_netData(const std::string & pzr_netMsg)
{
   if(!u4_preLength || !u4_bitmapLength || k1v_traceRoute.empty())
      return false;

   int beg_cut = u4_preLength + u4_bitmapLength, tmp_sz = 0;
   f_bitmat(pzr_netMsg.substr(u4_preLength, u4_bitmapLength));
   
   if(k1q_bitmap.size() != k1v_traceRoute.size())
      return false;
   
   for(size_t att_trc = 0; att_trc <= k1v_traceRoute.size(); ++att_trc)
   {
      if(k1q_bitmap.front())
      {  
         tmp_sz = k1v_traceRoute[att_trc];
         if(tmp_sz < 0)
         {
            tmp_sz = d_FieldLength(beg_cut, pzr_netMsg);
            if(!tmp_sz)
               return false;
            beg_cut += 2;
         }
         kzv_fields.push_back(pzr_netMsg.substr(beg_cut, tmp_sz));
         beg_cut += tmp_sz;
      }
      k1q_bitmap.pop();
   }
   
   return true;
};

/**
 * s_TracRoute method which show in ostream the trace route established
 * @return void
 */
void Protolayer::s_TracRoute() const
{
   std::cout << "[INFO s_TracRoute]\n";
   for(std::vector<int>::const_iterator kt_fsz = k1v_traceRoute.begin(); kt_fsz != k1v_traceRoute.end(); ++kt_fsz)
      std::cout << "|" << *kt_fsz;
   std::cout << std::endl;
};

/**
 * f_route method which feed the route based on a given string
 * @param pzr_dip const string reference, the string
 * @return void
 */
void Protolayer::f_route(const std::string & pzr_dip)
{
   if(pzr_dip.size() && pzr_dip.find_first_of("0123456789") != std::string::npos)
   {
      k1v_traceRoute.clear();
      bool neg_holder = false;
      for(int lgt_str = pzr_dip.size() - 1, num_inc = 1, b_nb = 0; lgt_str >= 0; --lgt_str, num_inc = (b_nb) ? num_inc * 10 : 1)
      {
         if(isdigit(pzr_dip[lgt_str]))
         {
            b_nb += num_inc * (pzr_dip[lgt_str] - 48);
            if(neg_holder)
               b_nb *= -1;
         }
         else if(pzr_dip[lgt_str] == '-')
            ++neg_holder;
         else
         {
            k1v_traceRoute.push_back(b_nb);
            b_nb = neg_holder = 0;
         }
         
         if(!lgt_str)
            k1v_traceRoute.push_back(b_nb);
      }
      std::reverse(k1v_traceRoute.begin(), k1v_traceRoute.end());
   }
};

/**
 * s_ByteBits method which show the right nibble bits in an ostream
 * @param p1r_val const char reference, our given byte
 * @return void
 */
void Protolayer::s_ByteBits(const char & p1r_val) const
{
   std::cout << "[INFO s_ByteBits] for : " << p1r_val << "\n" << std::string(18, 0x20) << "right nibble : ";
   for(unsigned short u2l_mN = 0; u2l_mN < 4; ++u2l_mN)
      std::cout << (bool)((p1r_val >> u2l_mN) & 0x01);
   std::cout << std::endl;
};

/**
 * s_BitmapBits method which show the bits status of each byte of our bitmap (field presence or not)
 * @param pzr_val const string reference, our given bitmap
 * @return void
 */
void Protolayer::s_BitmapBits(const std::string & pzr_val) const
{
   std::cout << "[INFO s_BitmapBits] for : " << pzr_val << "\n" << std::string(20, 0x20) << "bitmap is : ";
   char c1_B;
   for(unsigned short u2l_mN = 0; u2l_mN < pzr_val.size(); ++u2l_mN)
   {
      c1_B = pzr_val[u2l_mN];
      if(pzr_val[u2l_mN] > 96)
         c1_B = pzr_val[u2l_mN] - 87;
      else if(pzr_val[u2l_mN] > 64)
         c1_B = pzr_val[u2l_mN] - 55;
      
      std::cout << (bool)(c1_B & 0x08);
      std::cout << (bool)(c1_B & 0x04);
      std::cout << (bool)(c1_B & 0x02);
      std::cout << (bool)(c1_B & 0x01);
   }
   std::cout << std::endl;
};

/**
 * d_FieldLength function which retrieve the length of a variable size field
 * @param p4r_pos const unsigned int reference, the position in our netData
 * @param pzr_netMsg const string reference, the netData
 * @return unsigned int, the field size
 * @see in that case we always define the field length size over 2 bytes.
 */
unsigned int Protolayer::d_FieldLength(const unsigned int & p4r_pos, const std::string & pzr_netMsg) const
{
   if(pzr_netMsg.size() < (size_t)(p4r_pos + 2))
      return 0;
   
   unsigned int lu4_sz = (pzr_netMsg[p4r_pos] - 48) * 10 + (pzr_netMsg[p4r_pos + 1] - 48);
   return (pzr_netMsg.size() < (size_t)(p4r_pos + 1 + lu4_sz)) ? 0 : lu4_sz;
};

int main()
{
   Protolayer b;
   b.f_PreDataSize(4,2);
   
   std::string net_da("020081ABC0800777007");
   
   b.f_route("3,0,0,0,0,0,0,-1");
   b.s_TracRoute();
   
   b.d_netData(net_da);
   b.s_decFields();
   
   return 0;
}
