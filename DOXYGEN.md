<script type="text/javascript"><!-- var searchBox = new SearchBox("searchBox", "search",false,'Search'); --></script>

<div class="contents">

# mBank::mBank Class Reference

[List of all members.](classmBank_1_1mBank-members.html)

<table border="0" cellpadding="0" cellspacing="0">

<tbody>

<tr>

<td colspan="2">

## Public Types

</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">enum  </td>

<td class="memItemRight" valign="bottom">**dt_type** { **CCYY_MM**, **YYYY_MM_DDTHH_MM_SSz**, **YYYY_MM_DD** }</td>

</tr>

<tr>

<td colspan="2">

## Public Member Functions

</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">void </td>

<td class="memItemRight" valign="bottom">[e_swap](classmBank_1_1mBank.html#a54ba7648e2693d6a6e5baaeb9270054f) (uint16_t &p4r_val)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">bool </td>

<td class="memItemRight" valign="bottom">[sml_cut](classmBank_1_1mBank.html#a55b8317596991fe1b4dc895a9103bd9d) (const std::string &pzr_source, std::vector< int > &pvr_dest)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">bool </td>

<td class="memItemRight" valign="bottom">[char_inc](classmBank_1_1mBank.html#a92ff119e18ff5659c01131e2a5fdcd94) (std::string &pzr_source)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">int </td>

<td class="memItemRight" valign="bottom">[nb_str](classmBank_1_1mBank.html#ab55e377ddb1bc1410eda1d3056c35186) (std::string &pzr_source)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::vector< bool > </td>

<td class="memItemRight" valign="bottom">[bit_bol](classmBank_1_1mBank.html#af7faff942188a8f93ca74d081038493b) (const std::string &pzr_source)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">uint8_t </td>

<td class="memItemRight" valign="bottom">[bind_](classmBank_1_1mBank.html#ab3cb7d7266f9ad71adfbe1882a5840bf) (const char &p1r_left, const char &p1r_right)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top"><a class="anchor" id="acddfcb68c469dd470a8c70dff684ac07"></a>uint16_t </td>

<td class="memItemRight" valign="bottom">**bind_** (const uint8_t &p1r_left, const uint8_t &p1r_right)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top"><a class="anchor" id="acc4baadafb45e6c51bce62c2d5a74179"></a>uint32_t </td>

<td class="memItemRight" valign="bottom">**bind_** (const uint16_t &p1r_left, const uint16_t &p1r_right)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::string & </td>

<td class="memItemRight" valign="bottom">[str_unpad](classmBank_1_1mBank.html#ad04c3c7a6bbc7fcfcc8163cb54bd6b19) (std::string &pzr_source, const char &p1r_unpad, const bool &p1r_dir)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::string & </td>

<td class="memItemRight" valign="bottom">[str_padchar](classmBank_1_1mBank.html#a129daed3cb28c35646c31afba9dac12c) (std::string &pzr_source, const char &p1r_padchar, const int p4r_length, const bool &p1r_dir)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::vector< int > </td>

<td class="memItemRight" valign="bottom">[merge_bit](classmBank_1_1mBank.html#aa9793ae3c92409aa404a8f8ee458ab8f) (const std::string &pzr_sourceA, const std::string &pzr_sourceB)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">const std::string & </td>

<td class="memItemRight" valign="bottom">[subref](classmBank_1_1mBank.html#a10af7d06db4147683519f0140cec964d) (const unsigned short &p2r_pos, const unsigned short &p2r_qt, std::string &pzr_s)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">bool </td>

<td class="memItemRight" valign="bottom">[sql_spe](classmBank_1_1mBank.html#ae54f6cc2c5ad61c67e33866e92b87b35) (const std::string &pzr_tabName, const std::string &pzr_fetch, const std::vector< std::pair< std::string, std::string > > &pvr_colQual, std::map< int, std::string > &pmr_queryText)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">bool </td>

<td class="memItemRight" valign="bottom">[is_olc](classmBank_1_1mBank.html#acf42c6d408653c3829fef9ef8431c6da) (const std::string &pzr_source, const char &p1r_exp)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::map< std::string,  
std::string > </td>

<td class="memItemRight" valign="bottom">[un_tkn](classmBank_1_1mBank.html#a26e705455662aa3ceb2fda9bda9cd5b9) (const std::string &pzr_source, const int &p4r_tagSize, const int &p4r_lenSize, const std::map< std::string, int > &pmr_scheme)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::string </td>

<td class="memItemRight" valign="bottom">[build_sf](classmBank_1_1mBank.html#abec2e359334dc60d2dde1f3ac8fc43f0) (const std::string &pzr_source)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">const char & </td>

<td class="memItemRight" valign="bottom">[showRawByte](classmBank_1_1mBank.html#a5fc5a897e12274e8e01b6b51a5c1cdc8) (const char &p1r_val)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::string </td>

<td class="memItemRight" valign="bottom">[showBitmapBitStatus](classmBank_1_1mBank.html#a9798bce429ef0088daf623653b9a4bce) (const std::string &pzr_val)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">unsigned int </td>

<td class="memItemRight" valign="bottom">[decodeLength](classmBank_1_1mBank.html#a1263e4dbebcd6c9b2570d2e3400b8e84) (const unsigned int &pb1r_cutPos, const std::string &pzr_netMsg)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::string </td>

<td class="memItemRight" valign="bottom">[ascii2hexf](classmBank_1_1mBank.html#ae55078e10a0e76c71a7614ac9be14598) (const std::string &pzr_source)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::string </td>

<td class="memItemRight" valign="bottom">[hexf2ascii](classmBank_1_1mBank.html#a088a887b6d5a72b5968710dfb083167b) (const std::string &pzr_source)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">bool </td>

<td class="memItemRight" valign="bottom">[decode](classmBank_1_1mBank.html#aa1174a35789c41a088d71495aed76b18) (const std::string &pzr_mcMsg)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::bitset< 32 > </td>

<td class="memItemRight" valign="bottom">[to_b64](classmBank_1_1mBank.html#a6adce429d2d68e89d7a3c1cff7f07b12) (const char &p1r_b1=0x00, const char &p1r_b2=0x00, const char &p1r_b3=0x00)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::string </td>

<td class="memItemRight" valign="bottom">[ex_b64](classmBank_1_1mBank.html#aea57b80b2f6b1f162e728edd9bb3484e) (const std::bitset< 32 > &pcr_32bits)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::string & </td>

<td class="memItemRight" valign="bottom">[sd_c3](classmBank_1_1mBank.html#a2452ad8b7f0cabf881f7c0019c1cc896) (std::string &pzr_b255)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::string </td>

<td class="memItemRight" valign="bottom">[long_str](classmBank_1_1mBank.html#a7631f2bd6c012ac614d412416754ba3c) (const long &p8r_source)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::string </td>

<td class="memItemRight" valign="bottom">[inst_t](classmBank_1_1mBank.html#a38f76110abcc9510e53a331faefc2ea5) ()</td>

</tr>

<tr>

<td class="memTemplParams" colspan="2">template<class T ></td>

</tr>

<tr>

<td class="memTemplItemLeft" align="right" valign="top">T & </td>

<td class="memTemplItemRight" valign="bottom">[remake_swapAD](classmBank_1_1mBank.html#ac77842b4bbcfc793058e86f7d03e9d58) (T &ptr_in)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::string </td>

<td class="memItemRight" valign="bottom">[exp2_byte](classmBank_1_1mBank.html#a195cb63d3b4a39b32f0e247d370d02b3) (const char &p1r_source)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::string & </td>

<td class="memItemRight" valign="bottom">[to_ebcdic](classmBank_1_1mBank.html#a326ff490375dd1b557e466e8eaa62fee) (std::string &pzr_source)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">void </td>

<td class="memItemRight" valign="bottom">[setBit](classmBank_1_1mBank.html#a5ac2f7c46431a63f32eb97cbf069bea9) (char *p1p_bitmap, const short &p2r_field)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">bool </td>

<td class="memItemRight" valign="bottom">[dt_conformityCheck](classmBank_1_1mBank.html#a4ed26e5bc0fbf4a4331eb7ea6d181825) (const std::string &pzr_datetime, const dt_type &p1r_opt)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">bool </td>

<td class="memItemRight" valign="bottom">[bitmap_conv](classmBank_1_1mBank.html#a7d300b02930f9e459b6065b79f5d85c4) (const std::string &pzr_in, std::string &pzr_ref, const std::string &pzr_match)</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">std::vector< std::pair  
< unsigned char, unsigned char > > & </td>

<td class="memItemRight" valign="bottom">[computePosition](classmBank_1_1mBank.html#a79a87a7751564c97d38ed153c2478afe) (std::vector< std::pair< unsigned char, unsigned char > > &pv1_fields, const std::string &pzr_bitmapRaw, const std::string &pzr_rawNetData)</td>

</tr>

<tr>

<td class="memTemplParams" colspan="2">template<typename T ></td>

</tr>

<tr>

<td class="memTemplItemLeft" align="right" valign="top">bool </td>

<td class="memTemplItemRight" valign="bottom">[binary_search](classmBank_1_1mBank.html#a57b72a2ec828662cdef5aeb5341e104c) (const std::vector< T > &pvr_check, const T &pcr_elem)</td>

</tr>

<tr>

<td colspan="2">

## Static Public Member Functions

</td>

</tr>

<tr>

<td class="memItemLeft" align="right" valign="top">static bool </td>

<td class="memItemRight" valign="bottom">[isLitEnd](classmBank_1_1mBank.html#aa5c3f707cfa36a2f8a61926264b05453) ()</td>

</tr>

</tbody>

</table>

# mBank::mBank Member List

This is the complete list of members for [mBank::mBank](classmBank_1_1mBank.html), including all inherited members.

<table>

<tbody>

<tr class="memlist">

<td>[ascii2hexf](classmBank_1_1mBank.html#ae55078e10a0e76c71a7614ac9be14598)(const std::string &pzr_source)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[binary_search](classmBank_1_1mBank.html#a57b72a2ec828662cdef5aeb5341e104c)(const std::vector< T > &pvr_check, const T &pcr_elem)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[bind_](classmBank_1_1mBank.html#ab3cb7d7266f9ad71adfbe1882a5840bf)(const char &p1r_left, const char &p1r_right)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr bgcolor="#f0f0f0">

<td>**bind_**(const uint8_t &p1r_left, const uint8_t &p1r_right) (defined in [mBank::mBank](classmBank_1_1mBank.html))</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr bgcolor="#f0f0f0">

<td>**bind_**(const uint16_t &p1r_left, const uint16_t &p1r_right) (defined in [mBank::mBank](classmBank_1_1mBank.html))</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[bit_bol](classmBank_1_1mBank.html#af7faff942188a8f93ca74d081038493b)(const std::string &pzr_source)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[bitmap_conv](classmBank_1_1mBank.html#a7d300b02930f9e459b6065b79f5d85c4)(const std::string &pzr_in, std::string &pzr_ref, const std::string &pzr_match)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[build_sf](classmBank_1_1mBank.html#abec2e359334dc60d2dde1f3ac8fc43f0)(const std::string &pzr_source)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr bgcolor="#f0f0f0">

<td>**CCYY_MM** enum value (defined in [mBank::mBank](classmBank_1_1mBank.html))</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td></td>

</tr>

<tr class="memlist">

<td>[char_inc](classmBank_1_1mBank.html#a92ff119e18ff5659c01131e2a5fdcd94)(std::string &pzr_source)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[computePosition](classmBank_1_1mBank.html#a79a87a7751564c97d38ed153c2478afe)(std::vector< std::pair< unsigned char, unsigned char > > &pv1_fields, const std::string &pzr_bitmapRaw, const std::string &pzr_rawNetData)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[decode](classmBank_1_1mBank.html#aa1174a35789c41a088d71495aed76b18)(const std::string &pzr_mcMsg)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[decodeLength](classmBank_1_1mBank.html#a1263e4dbebcd6c9b2570d2e3400b8e84)(const unsigned int &pb1r_cutPos, const std::string &pzr_netMsg)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[dt_conformityCheck](classmBank_1_1mBank.html#a4ed26e5bc0fbf4a4331eb7ea6d181825)(const std::string &pzr_datetime, const dt_type &p1r_opt)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr bgcolor="#f0f0f0">

<td>**dt_type** enum name (defined in [mBank::mBank](classmBank_1_1mBank.html))</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td></td>

</tr>

<tr class="memlist">

<td>[e_swap](classmBank_1_1mBank.html#a54ba7648e2693d6a6e5baaeb9270054f)(uint16_t &p4r_val)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[ex_b64](classmBank_1_1mBank.html#aea57b80b2f6b1f162e728edd9bb3484e)(const std::bitset< 32 > &pcr_32bits)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[exp2_byte](classmBank_1_1mBank.html#a195cb63d3b4a39b32f0e247d370d02b3)(const char &p1r_source)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[hexf2ascii](classmBank_1_1mBank.html#a088a887b6d5a72b5968710dfb083167b)(const std::string &pzr_source)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[inst_t](classmBank_1_1mBank.html#a38f76110abcc9510e53a331faefc2ea5)()</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[is_olc](classmBank_1_1mBank.html#acf42c6d408653c3829fef9ef8431c6da)(const std::string &pzr_source, const char &p1r_exp)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[isLitEnd](classmBank_1_1mBank.html#aa5c3f707cfa36a2f8a61926264b05453)()</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline, static]`</td>

</tr>

<tr class="memlist">

<td>[long_str](classmBank_1_1mBank.html#a7631f2bd6c012ac614d412416754ba3c)(const long &p8r_source)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[merge_bit](classmBank_1_1mBank.html#aa9793ae3c92409aa404a8f8ee458ab8f)(const std::string &pzr_sourceA, const std::string &pzr_sourceB)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[nb_str](classmBank_1_1mBank.html#ab55e377ddb1bc1410eda1d3056c35186)(std::string &pzr_source)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[remake_swapAD](classmBank_1_1mBank.html#ac77842b4bbcfc793058e86f7d03e9d58)(T &ptr_in)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[sd_c3](classmBank_1_1mBank.html#a2452ad8b7f0cabf881f7c0019c1cc896)(std::string &pzr_b255)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[setBit](classmBank_1_1mBank.html#a5ac2f7c46431a63f32eb97cbf069bea9)(char *p1p_bitmap, const short &p2r_field)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[showBitmapBitStatus](classmBank_1_1mBank.html#a9798bce429ef0088daf623653b9a4bce)(const std::string &pzr_val)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[showRawByte](classmBank_1_1mBank.html#a5fc5a897e12274e8e01b6b51a5c1cdc8)(const char &p1r_val)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[sml_cut](classmBank_1_1mBank.html#a55b8317596991fe1b4dc895a9103bd9d)(const std::string &pzr_source, std::vector< int > &pvr_dest)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[sql_spe](classmBank_1_1mBank.html#ae54f6cc2c5ad61c67e33866e92b87b35)(const std::string &pzr_tabName, const std::string &pzr_fetch, const std::vector< std::pair< std::string, std::string > > &pvr_colQual, std::map< int, std::string > &pmr_queryText)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[str_padchar](classmBank_1_1mBank.html#a129daed3cb28c35646c31afba9dac12c)(std::string &pzr_source, const char &p1r_padchar, const int p4r_length, const bool &p1r_dir)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[str_unpad](classmBank_1_1mBank.html#ad04c3c7a6bbc7fcfcc8163cb54bd6b19)(std::string &pzr_source, const char &p1r_unpad, const bool &p1r_dir)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[subref](classmBank_1_1mBank.html#a10af7d06db4147683519f0140cec964d)(const unsigned short &p2r_pos, const unsigned short &p2r_qt, std::string &pzr_s)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[to_b64](classmBank_1_1mBank.html#a6adce429d2d68e89d7a3c1cff7f07b12)(const char &p1r_b1=0x00, const char &p1r_b2=0x00, const char &p1r_b3=0x00)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[to_ebcdic](classmBank_1_1mBank.html#a326ff490375dd1b557e466e8eaa62fee)(std::string &pzr_source)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr class="memlist">

<td>[un_tkn](classmBank_1_1mBank.html#a26e705455662aa3ceb2fda9bda9cd5b9)(const std::string &pzr_source, const int &p4r_tagSize, const int &p4r_lenSize, const std::map< std::string, int > &pmr_scheme)</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td>`[inline]`</td>

</tr>

<tr bgcolor="#f0f0f0">

<td>**YYYY_MM_DD** enum value (defined in [mBank::mBank](classmBank_1_1mBank.html))</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td></td>

</tr>

<tr bgcolor="#f0f0f0">

<td>**YYYY_MM_DDTHH_MM_SSz** enum value (defined in [mBank::mBank](classmBank_1_1mBank.html))</td>

<td>[mBank::mBank](classmBank_1_1mBank.html)</td>

<td></td>

</tr>

</tbody>

</table>

* * *

## Member Function Documentation

<a class="anchor" id="ae55078e10a0e76c71a7614ac9be14598"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::string mBank::mBank::ascii2hexf</td>

<td>(</td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_source_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which translate an ascii string to it's hex ascii format following the UTF-8 scheme

<dl class="see">

<dt>**See also:**</dt>

<dd>UTF-8 HEX scheme e.g : '0' to "30" | BE AWARE OF THE INPUT STRING SIZE LIMITNESS : max = 0 to 18,446,744,073,709,551,615</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_source_ </td>

<td>const string reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>string</dd>

</dl>

</div>

</div>

<a class="anchor" id="a57b72a2ec828662cdef5aeb5341e104c"></a>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">template<typename T ></div>

<table class="memname">

<tbody>

<tr>

<td class="memname">bool mBank::mBank::binary_search</td>

<td>(</td>

<td class="paramtype">const std::vector< T > & </td>

<td class="paramname">_pvr_check_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const T & </td>

<td class="paramname">_pcr_elem_</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

Function which do the binary type search inside a sorted vector

<dl class="see">

<dt>**See also:**</dt>

<dd>binary search</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_@param_ </td>

<td></td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>true if element found</dd>

</dl>

</div>

</div>

<a class="anchor" id="ab3cb7d7266f9ad71adfbe1882a5840bf"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">uint8_t mBank::mBank::bind_</td>

<td>(</td>

<td class="paramtype">const char & </td>

<td class="paramname">_p1r_left_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const char & </td>

<td class="paramname">_p1r_right_</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function's which serialize a 2x4:8/2x8:16/2x16:32/2x32:64 stream

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_p1r_left_ </td>

<td>const reference of char/uint8_t/uint16_t/uint32_t</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_p1r_right_ </td>

<td>const reference of char/uint8_t/uint16_t/uint32_t</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>uint8_t/uint16_t/uint32_t/uint64_t</dd>

</dl>

</div>

</div>

<a class="anchor" id="af7faff942188a8f93ca74d081038493b"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::vector<bool> mBank::mBank::bit_bol</td>

<td>(</td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_source_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which return a bitmap string argument as a vector<bool> expression field state

<dl class="see">

<dt>**See also:**</dt>

<dd>e.g : string("4FC01") will return -> 01001111110000000001</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_const_ </td>

<td>string reference pzr_source</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>vector<bool></dd>

</dl>

</div>

</div>

<a class="anchor" id="a7d300b02930f9e459b6065b79f5d85c4"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">bool mBank::mBank::bitmap_conv</td>

<td>(</td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_in_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">std::string & </td>

<td class="paramname">_pzr_ref_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_match_</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which check bitstate inside 1 byte then fetch the affiliated value from an array.

<dl class="see">

<dt>**See also:**</dt>

<dd>check the pzr_in[0] bit state and get the value of pzr_match (e.g) : pzr_in[0] = 00010000 = 5 (bit pos right to left) = pzr_match[5] to pzr_ref</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_in_ </td>

<td>const string reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_ref_ </td>

<td>string reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_match_ </td>

<td>const string reference truncated</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>bool state of the conversion</dd>

</dl>

</div>

</div>

<a class="anchor" id="abec2e359334dc60d2dde1f3ac8fc43f0"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::string mBank::mBank::build_sf</td>

<td>(</td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_source_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which build a specific field

<dl class="see">

<dt>**See also:**</dt>

<dd>it follow the scheme : LLL PAR LLL 01 LL DATA, e.g : 026PAR02001164587545896523546</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_source_ </td>

<td>const string reference : paymentAccountRef</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>string : paymentAccountData</dd>

</dl>

</div>

</div>

<a class="anchor" id="a92ff119e18ff5659c01131e2a5fdcd94"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">bool mBank::mBank::char_inc</td>

<td>(</td>

<td class="paramtype">std::string & </td>

<td class="paramname">_pzr_source_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which increment the last char value of a string parameter if and only if numeric

<dl class="see">

<dt>**See also:**</dt>

<dd>if your string is something as follow : counter_1 the string returned will be : counter_2 or if : compute99 returned string : compute100</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_string_ </td>

<td>reference pzr_source</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>bool false if not well computed source string</dd>

</dl>

</div>

</div>

<a class="anchor" id="a79a87a7751564c97d38ed153c2478afe"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::vector<std::pair<unsigned char, unsigned char> >& mBank::mBank::computePosition</td>

<td>(</td>

<td class="paramtype">std::vector< std::pair< unsigned char, unsigned char > > & </td>

<td class="paramname">_pv1_fields_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_bitmapRaw_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_rawNetData_</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

Function which retrive the starting position to substring the binding key fields from the raw netData.

<dl class="see">

<dt>**See also:**</dt>

<dd>retrive each first position, push_back each in a vector then return it</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_vector<pair<ubyte1,ubyte1>_ </td>

<td>> reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_const_ </td>

<td>string reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_const_ </td>

<td>string reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>vector<pair<ubyte1, ubyte1> > with cut capacity position's</dd>

</dl>

</div>

</div>

<a class="anchor" id="aa1174a35789c41a088d71495aed76b18"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">bool mBank::mBank::decode</td>

<td>(</td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_mcMsg_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which decode the fields based over the bits state of the bitmap by size

<dl class="see">

<dt>**See also:**</dt>

<dd>the main purpoose is to reach the xxxxxxxxx, cut it, assign it to mz_matchingKey</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_mcMsg_ </td>

<td>const string reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>bool 1 if decoding is OK</dd>

</dl>

init itt temp data ul1_i : unsigned char, used as a bits itterator inside a nibble, range [0;3], ONLY used to do 4 loops ub1_cTyp : unsigned char, used as a boolean, true if hex-ASCII char equal [0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39] ul1_rNibb : unsigned char, used as a begin iterator, valued at 0 if ub1_cTyp true OR 3 if !ub1_cTyp ul4_gCtn : unsigned byte4, used as an iterator to represent the actual field number ul1_ct : unsigned char, used as an iterator to represent the actual bitmap byte ul4_netCut : 4 bytes, increment used to count the size cutout from the netData before the xxxxxxxxx

<dl class="see">

<dt>**See also:**</dt>

<dd>that for loop is used ONLY to iterate through all the [hex-ASCII bytes] of the bitmap</dd>

<dd>that for loop is used ONLY to iterate through all the [bits of the r-nibble] in 1 hex-ASCII bytes of the bitmap</dd>

<dd>if our hex-ASCII byte is > 0x39 then the std::bitset container is reversed (bits order is reversed NOT ~ !!!)</dd>

<dd>in case of FIXED size fields</dd>

<dd>in case of VARIABLE size fields</dd>

</dl>

</div>

</div>

<a class="anchor" id="a1263e4dbebcd6c9b2570d2e3400b8e84"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">unsigned int mBank::mBank::decodeLength</td>

<td>(</td>

<td class="paramtype">const unsigned int & </td>

<td class="paramname">_pb1r_cutPos_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_netMsg_</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which decode the length of a field inside the main data()

<dl class="see">

<dt>**See also:**</dt>

<dd>in our case length is always on 2 bytes so 2 right nibbles</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pb1r_cutPos_ </td>

<td>const ubyte4 reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_netMsg_ </td>

<td>const string reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>unsigned int</dd>

</dl>

</div>

</div>

<a class="anchor" id="a4ed26e5bc0fbf4a4331eb7ea6d181825"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">bool mBank::mBank::dt_conformityCheck</td>

<td>(</td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_datetime_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const dt_type & </td>

<td class="paramname">_p1r_opt_</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which'll check the conformity for special date & time values

<dl class="see">

<dt>**See also:**</dt>

<dd>will check : size, digits, delimitors, range correctness of date and time values. Each non-digit char will be concider as a delimitor</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_datetime_ </td>

<td>const string reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_dt_type_ </td>

<td>const enum reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>bool true if conformity approved p1r_opt : 1 - CCYY-MM 2 - YYYY-MM-DDTHH:MM:SSz 3 - YYYY-MM-DD</dd>

</dl>

</div>

</div>

<a class="anchor" id="a54ba7648e2693d6a6e5baaeb9270054f"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">void mBank::mBank::e_swap</td>

<td>(</td>

<td class="paramtype">uint16_t & </td>

<td class="paramname">_p4r_val_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

method which swap the endianess to little if big for 16bits

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_p4r_val_ </td>

<td>uint16_t reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>void</dd>

</dl>

</div>

</div>

<a class="anchor" id="aea57b80b2f6b1f162e728edd9bb3484e"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::string mBank::mBank::ex_b64</td>

<td>(</td>

<td class="paramtype">const std::bitset< 32 > & </td>

<td class="paramname">_pcr_32bits_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which express 24 bits into base 64 string

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pcr_32bits_ </td>

<td>const bitset<32> reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>string in base 64 format</dd>

</dl>

</div>

</div>

<a class="anchor" id="a195cb63d3b4a39b32f0e247d370d02b3"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::string mBank::mBank::exp2_byte</td>

<td>(</td>

<td class="paramtype">const char & </td>

<td class="paramname">_p1r_source_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which unpack 2 nibbles of 1 bytes in 2 bytes

<dl class="see">

<dt>**See also:**</dt>

<dd>use case : 0xF5 will give a string(0x0F + 0x05) "F5"</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_p1r_source_ </td>

<td>const char reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>string</dd>

</dl>

</div>

</div>

<a class="anchor" id="a088a887b6d5a72b5968710dfb083167b"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::string mBank::mBank::hexf2ascii</td>

<td>(</td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_source_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which translate a hex string to the ascii format

<dl class="see">

<dt>**See also:**</dt>

<dd>following the UTF-8 scheme e.g : "31" to "1"</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_source_ </td>

<td>const string reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>string</dd>

</dl>

</div>

</div>

<a class="anchor" id="a38f76110abcc9510e53a331faefc2ea5"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::string mBank::mBank::inst_t</td>

<td>(</td>

<td class="paramname"></td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which return the full time at calling for log purposes

<dl class="see">

<dt>**See also:**</dt>

<dd>time() returns the time as the number of seconds since the Epoch, 1970-01-01 00:00:00 +0000 (UTC).</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>string</dd>

</dl>

</div>

</div>

<a class="anchor" id="acf42c6d408653c3829fef9ef8431c6da"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">bool mBank::mBank::is_olc</td>

<td>(</td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_source_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const char & </td>

<td class="paramname">_p1r_exp_</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which check the full char consistency of a given string based over a give char as padding argument

<dl class="see">

<dt>**See also:**</dt>

<dd>if s("aaaaa") and char = 'a' return true, elsewhere if s has something else than a return false</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_source_ </td>

<td>const string reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_p1r_exp_ </td>

<td>const char reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>bool, true if string if fully padded with the given char as arg</dd>

</dl>

</div>

</div>

<a class="anchor" id="aa5c3f707cfa36a2f8a61926264b05453"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">static bool mBank::mBank::isLitEnd</td>

<td>(</td>

<td class="paramname"></td>

<td> ) </td>

<td>`[inline, static]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

endianess function

<dl class="return">

<dt>**Returns:**</dt>

<dd>true if little</dd>

</dl>

</div>

</div>

<a class="anchor" id="a7631f2bd6c012ac614d412416754ba3c"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::string mBank::mBank::long_str</td>

<td>(</td>

<td class="paramtype">const long & </td>

<td class="paramname">_p8r_source_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which convert a long to a string

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_const_ </td>

<td>long reference p8r_source</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>string</dd>

</dl>

</div>

</div>

<a class="anchor" id="aa9793ae3c92409aa404a8f8ee458ab8f"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::vector<int> mBank::mBank::merge_bit</td>

<td>(</td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_sourceA_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_sourceB_</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which merge and expose the distinct field upon two different received bitmaps

<dl class="see">

<dt>**See also:**</dt>

<dd>e.g : for a("F2") and b("F3") -> 1111 0010 and 1111 0011 only field number 8 will be exposed. (XOR) be aware that if a string size difference occur an empty vector will be returned</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_sourceA_ </td>

<td>const string reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_sourceB_ </td>

<td>const string reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>std::vector<int> with fields number (AD)</dd>

</dl>

</div>

</div>

<a class="anchor" id="ab55e377ddb1bc1410eda1d3056c35186"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">int mBank::mBank::nb_str</td>

<td>(</td>

<td class="paramtype">std::string & </td>

<td class="paramname">_pzr_source_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which return the number located at the end of a string

<dl class="see">

<dt>**See also:**</dt>

<dd>if your string is something as follow : counter_45, the returned number will be 45</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_string_ </td>

<td>reference pzr_source</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>int number at end of pzr_source</dd>

</dl>

</div>

</div>

<a class="anchor" id="ac77842b4bbcfc793058e86f7d03e9d58"></a>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">template<class T ></div>

<table class="memname">

<tbody>

<tr>

<td class="memname">T& mBank::mBank::remake_swapAD</td>

<td>(</td>

<td class="paramtype">T & </td>

<td class="paramname">_ptr_in_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

template which swap the byte order in T

<dl class="see">

<dt>**See also:**</dt>

<dd>bytes swapping</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_ptr_in_ </td>

<td>T reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>T ptr_in as reference</dd>

</dl>

</div>

</div>

<a class="anchor" id="a2452ad8b7f0cabf881f7c0019c1cc896"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::string& mBank::mBank::sd_c3</td>

<td>(</td>

<td class="paramtype">std::string & </td>

<td class="paramname">_pzr_b255_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which cut each 3 char of a b255 string and append back the result as b64 string

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_b255_ </td>

<td>string reference as b255</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>pzr_b255 reference as b64</dd>

</dl>

</div>

</div>

<a class="anchor" id="a5ac2f7c46431a63f32eb97cbf069bea9"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">void mBank::mBank::setBit</td>

<td>(</td>

<td class="paramtype">char * </td>

<td class="paramname">_p1p_bitmap_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const short & </td>

<td class="paramname">_p2r_field_</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

method setBit in order to swap to true one byte

<dl class="see">

<dt>**See also:**</dt>

<dd>something like std::bitset::flip but for our bitmaps</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_p1p_bitmap_ </td>

<td>char pointer</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_p2r_field_ </td>

<td>const short reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>void</dd>

</dl>

</div>

</div>

<a class="anchor" id="a9798bce429ef0088daf623653b9a4bce"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::string mBank::mBank::showBitmapBitStatus</td>

<td>(</td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_val_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which will provide some output in order to show the bits state of the bitmap, and the field presence

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_val_ </td>

<td>const string reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>string which'll be a LOG</dd>

</dl>

</div>

</div>

<a class="anchor" id="a5fc5a897e12274e8e01b6b51a5c1cdc8"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">const char& mBank::mBank::showRawByte</td>

<td>(</td>

<td class="paramtype">const char & </td>

<td class="paramname">_p1r_val_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which echo the bit state in a 1 byte value

<dl class="see">

<dt>**See also:**</dt>

<dd>if our hex-ASCII byte is > 0x39 then the std::bitset container is reversed (bits order is reversed NOT ~ !!!)</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_p1r_val_ </td>

<td>const char reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>const char reference of p1r_val</dd>

</dl>

</div>

</div>

<a class="anchor" id="a55b8317596991fe1b4dc895a9103bd9d"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">bool mBank::mBank::sml_cut</td>

<td>(</td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_source_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">std::vector< int > & </td>

<td class="paramname">_pvr_dest_</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function sml_cut cutter which extract ID in a string to a vector<int>

<dl class="see">

<dt>**See also:**</dt>

<dd>pzr_source must be formatted as follow : 4000,8000,4580 you can use whatever you want as a delimiter char, but keep a constant use of 4 numeric chars followed by a delimiter only if another MTI will be used.</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_const_ </td>

<td>string reference pzr_source</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_vector<byte4>_ </td>

<td>reference pvr_dest</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>bool false if not well formated pzr_source</dd>

</dl>

</div>

</div>

<a class="anchor" id="ae54f6cc2c5ad61c67e33866e92b87b35"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">bool mBank::mBank::sql_spe</td>

<td>(</td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_tabName_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_fetch_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const std::vector< std::pair< std::string, std::string > > & </td>

<td class="paramname">_pvr_colQual_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">std::map< int, std::string > & </td>

<td class="paramname">_pmr_queryText_</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which initialize the SQL QUERY MAP : mm_queryText

<dl class="see">

<dt>**See also:**</dt>

<dd>create a string SQL query and add it to mm_queryText following the fetching scheme qualifier(s) contained inside pvr_colQual</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_tabName_ </td>

<td>const string reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_fetch_ </td>

<td>const string reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_pvr_colQual_ </td>

<td>const vector of pair made of string and string reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_pmr_queryText_ </td>

<td>map of int and string reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>bool</dd>

</dl>

</div>

</div>

<a class="anchor" id="a129daed3cb28c35646c31afba9dac12c"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::string& mBank::mBank::str_padchar</td>

<td>(</td>

<td class="paramtype">std::string & </td>

<td class="paramname">_pzr_source_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const char & </td>

<td class="paramname">_p1r_padchar_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const int </td>

<td class="paramname">_p4r_length_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const bool & </td>

<td class="paramname">_p1r_dir_</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which pad a char in a given direction for a specific amount

<dl class="see">

<dt>**See also:**</dt>

<dd>e.g : pad 0 x6 at end of string("abc") -> abc000000</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_source_ </td>

<td>string reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_p1r_padchar_ </td>

<td>const char reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_p4r_length_ </td>

<td>const int reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_p1r_dir_ </td>

<td>const bool reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>pzr_source string reference</dd>

</dl>

</div>

</div>

<a class="anchor" id="ad04c3c7a6bbc7fcfcc8163cb54bd6b19"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::string& mBank::mBank::str_unpad</td>

<td>(</td>

<td class="paramtype">std::string & </td>

<td class="paramname">_pzr_source_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const char & </td>

<td class="paramname">_p1r_unpad_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const bool & </td>

<td class="paramname">_p1r_dir_</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which unpad a specific char from a string beside a given direction

<dl class="see">

<dt>**See also:**</dt>

<dd>e.g : for string("htr0000") removing 0x30 will end in a return string("htr")</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_source_ </td>

<td>string reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_p1r_unpad_ </td>

<td>const char reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_p1r_dir_ </td>

<td>const bool reference (TRUE for left 2 right, FALSE vice versa)</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>pzr_source string reference</dd>

</dl>

</div>

</div>

<a class="anchor" id="a10af7d06db4147683519f0140cec964d"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">const std::string& mBank::mBank::subref</td>

<td>(</td>

<td class="paramtype">const unsigned short & </td>

<td class="paramname">_p2r_pos_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const unsigned short & </td>

<td class="paramname">_p2r_qt_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">std::string & </td>

<td class="paramname">_pzr_s_</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which do the same process as STL std::string::substr() over a given reference

<dl class="see">

<dt>**See also:**</dt>

<dd>this function is 2x time faster than std::string::substr() until you reach a cut of 10 chars (linear prog.)</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_p2r_pos_ </td>

<td>const unsigned short reference (starting char position)</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_p2r_qt_ </td>

<td>const unsigned short reference (quantity to cut & realloc)</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_s_ </td>

<td>string reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>pzr_s const string reference</dd>

</dl>

</div>

</div>

<a class="anchor" id="a6adce429d2d68e89d7a3c1cff7f07b12"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::bitset<32> mBank::mBank::to_b64</td>

<td>(</td>

<td class="paramtype">const char & </td>

<td class="paramname">_p1r_b1_ = `0x00`,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const char & </td>

<td class="paramname">_p1r_b2_ = `0x00`,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const char & </td>

<td class="paramname">_p1r_b3_ = `0x00`</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which cut 3 bytes to 4 base 64 x6 bits.

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_p1r_b1_ </td>

<td>const char reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_p1r_b2_ </td>

<td>const char reference</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_p1r_b3_ </td>

<td>const char reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>bitset<32> 4 concatenated raw bytes with the first set to 0x00</dd>

</dl>

</div>

</div>

<a class="anchor" id="a326ff490375dd1b557e466e8eaa62fee"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::string& mBank::mBank::to_ebcdic</td>

<td>(</td>

<td class="paramtype">std::string & </td>

<td class="paramname">_pzr_source_</td>

<td> ) </td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function ASCII to EBCDIC

<dl class="see">

<dt>**See also:**</dt>

<dd>EBCDIC IBM table</dd>

</dl>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_source_ </td>

<td>string reference</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>pzr_source reference</dd>

</dl>

</div>

</div>

<a class="anchor" id="a26e705455662aa3ceb2fda9bda9cd5b9"></a>

<div class="memitem">

<div class="memproto">

<table class="memname">

<tbody>

<tr>

<td class="memname">std::map<std::string, std::string> mBank::mBank::un_tkn</td>

<td>(</td>

<td class="paramtype">const std::string & </td>

<td class="paramname">_pzr_source_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const int & </td>

<td class="paramname">_p4r_tagSize_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const int & </td>

<td class="paramname">_p4r_lenSize_,</td>

</tr>

<tr>

<td class="paramkey"></td>

<td></td>

<td class="paramtype">const std::map< std::string, int > & </td>

<td class="paramname">_pmr_scheme_</td>

<td> </td>

</tr>

<tr>

<td></td>

<td>)</td>

<td></td>

<td></td>

<td>`[inline]`</td>

</tr>

</tbody>

</table>

</div>

<div class="memdoc">

function which unpach a set of token data inside a string into a map<string, string>

<dl>

<dt>**Parameters:**</dt>

<dd>

<table border="0" cellspacing="2" cellpadding="0">

<tbody>

<tr>

<td valign="top"></td>

<td valign="top">_pzr_source_ </td>

<td>const string reference : raw string</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_p4r_tagSize_ </td>

<td>const int reference : size of token tags</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_p4r_lenSize_ </td>

<td>const int reference : size of token length</td>

</tr>

<tr>

<td valign="top"></td>

<td valign="top">_pmr_scheme_ </td>

<td>const map reference : scheme of unpacking first = tag name, second = max length size</td>

</tr>

</tbody>

</table>

</dd>

</dl>

<dl class="return">

<dt>**Returns:**</dt>

<dd>map<string, string> of first : token data name, second : token data value</dd>

</dl>

</div>

</div>

* * *

The documentation for this class was generated from the following file:

*   assets.cxx

</div>

<div id="MSearchSelectWindow" onmouseover="return searchBox.OnSearchSelectShow()" onmouseout="return searchBox.OnSearchSelectHide()" onkeydown="return searchBox.OnSearchSelectKey(event)">[<span class="SelectionMark"> </span>All](javascript:void(0))[<span class="SelectionMark"> </span>Classes](javascript:void(0))[<span class="SelectionMark"> </span>Functions](javascript:void(0))</div>

<div id="MSearchResultsWindow"><iframe src="" frameborder="0" name="MSearchResults" id="MSearchResults"></iframe></div>

* * *

<address style="text-align: right;"><small>Generated on 22 Jun 2018 by  [![doxygen](doxygen.png)](http://www.doxygen.org/index.html) 1.6.1</small></address>
