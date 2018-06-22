# myBank

<table border="" width="100%">

<tbody>

<tr>

<th colspan="2">CCCC Software Metrics Report  
generated Fri Jun 22 15:29:10 2018</th>

</tr>

<tr>

<th>

#### [Project Summary](#projsum)

</th>

<td>Summary table of high level measures summed over all files processed in the current run.</td>

</tr>

<tr>

<th>

#### [Procedural Metrics Summary](#procsum)

</th>

<td>Table of procedural measures (i.e. lines of code, lines of comment, McCabe's cyclomatic complexity summed over each module.</td>

</tr>

<tr>

<th>

#### [Object Oriented Design](#oodesign)

</th>

<td>Table of four of the 6 metrics proposed by Chidamber and Kemerer in their various papers on 'a metrics suite for object oriented design'.</td>

</tr>

<tr>

<th>

#### [Structural Metrics Summary](#structsum)

</th>

<td>Structural metrics based on the relationships of each module with others. Includes fan-out (i.e. number of other modules the current module uses), fan-in (number of other modules which use the current module), and the Information Flow measure suggested by Henry and Kafura, which combines these to give a measure of coupling for the module.</td>

</tr>

<tr>

<th>

#### [Other Extents](#other)

</th>

<td>Lexical counts for parts of submitted source files which the analyser was unable to assign to a module. Each record in this table relates to either a part of the code which triggered a parse failure, or to the residual lexical counts relating to parts of a file not associated with a specific module.</td>

</tr>

<tr>

<th>

#### [About CCCC](#infocccc)

</th>

<td>A description of the CCCC program.</td>

</tr>

</tbody>

</table>

# <a name="projsum">Project Summary</a>

This table shows measures over the project as a whole.

*   NOM = Number of modules  
    Number of non-trivial modules identified by the analyser. Non-trivial modules include all classes, and any other module for which member functions are identified.
*   LOC = Lines of Code  
    Number of non-blank, non-comment lines of source code counted by the analyser.
*   COM = Lines of Comments  
    Number of lines of comment identified by the analyser
*   MVG = McCabe's Cyclomatic Complexity  
    A measure of the decision complexity of the functions which make up the program.The strict definition of this measure is that it is the number of linearly independent routes through a directed acyclic graph which maps the flow of control of a subprogram. The analyser counts this by recording the number of distinct decision outcomes contained within each function, which yields a good approximation to the formally defined version of the measure.
*   L_C = Lines of code per line of comment  
    Indicates density of comments with respect to textual size of program
*   M_C = Cyclomatic Complexity per line of comment  
    Indicates density of comments with respect to logical complexity of program
*   IF4 = Information Flow measure  
    Measure of information flow between modules suggested by Henry and Kafura. The analyser makes an approximate count of this by counting inter-module couplings identified in the module interfaces.

Two variants on the information flow measure IF4 are also presented, one (IF4v) calculated using only relationships in the visible part of the module interface, and the other (IF4c) calculated using only those relationships which imply that changes to the client must be recompiled of the supplier's definition changes.

<table border="" width="100%">

<tbody>

<tr>

<th bgcolor="AQUA" width="70%">Metric</th>

<th bgcolor="AQUA" width="10%">Tag</th>

<th bgcolor="AQUA" width="10%">Overall</th>

<th bgcolor="AQUA" width="10%">Per Module</th>

</tr>

<tr>

<td>Number of modules</td>

<td>NOM</td>

<td align="RIGHT">4</td>

<td> </td>

</tr>

<tr>

<td width="700%">Lines of Code</td>

<td width="120%">LOC</td>

<td align="RIGHT">569</td>

<td align="RIGHT">142.250</td>

</tr>

<tr>

<td>McCabe's Cyclomatic Number</td>

<td>MVG</td>

<td align="RIGHT">177</td>

<td align="RIGHT">44.250</td>

</tr>

<tr>

<td>Lines of Comment</td>

<td>COM</td>

<td align="RIGHT">359</td>

<td align="RIGHT">89.750</td>

</tr>

<tr>

<td>LOC/COM</td>

<td>L_C</td>

<td align="RIGHT">1.585</td>

<td> </td>

</tr>

<tr>

<td>MVG/COM</td>

<td>M_C</td>

<td align="RIGHT">0.493</td>

<td> </td>

</tr>

<tr>

<td>Information Flow measure (  inclusive )</td>

<td>IF4</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0.000</td>

</tr>

<tr>

<td>Information Flow measure (  visible )</td>

<td>IF4v</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0.000</td>

</tr>

<tr>

<td>Information Flow measure (  concrete )</td>

<td>IF4c</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0.000</td>

</tr>

<tr>

<td>Lines of Code rejected by parser</td>

<td>REJ</td>

<td align="RIGHT">55</td>

<td> </td>

</tr>

</tbody>

</table>

# <a name="procsum">Procedural Metrics Summary</a>

For descriptions of each of these metrics see the information preceding the project summary table. The label cell for each row in this table provides a link to the functions table in the detailed report for the module in question

<table border="" width="100%">

<tbody>

<tr>

<th bgcolor="AQUA">Module Name</th>

<th bgcolor="AQUA" width="8%">LOC</th>

<th bgcolor="AQUA" width="8%">MVG</th>

<th bgcolor="AQUA" width="8%">COM</th>

<th bgcolor="AQUA" width="8%">L_C</th>

<th bgcolor="AQUA" width="8%">M_C</th>

</tr>

<tr>

<td>[T](T.html#procdet)</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">------</td>

<td align="RIGHT">------</td>

</tr>

<tr>

<td>[anonymous](anonymous.html#procdet)</td>

<td align="RIGHT">458</td>

<td align="RIGHT">176</td>

<td align="RIGHT">246</td>

<td align="RIGHT">1.862</td>

<td align="RIGHT">0.715</td>

</tr>

<tr>

<td>[std](std.html#procdet)</td>

<td align="RIGHT">47</td>

<td align="RIGHT">0</td>

<td align="RIGHT">47</td>

<td align="RIGHT">1.000</td>

<td align="RIGHT">------</td>

</tr>

<tr>

<td>[vector](vector.html#procdet)</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">------</td>

<td align="RIGHT">------</td>

</tr>

</tbody>

</table>

# <a name="oodesign">Object Oriented Design</a>

*   WMC = Weighted methods per class  
    The sum of a weighting function over the functions of the module. Two different weighting functions are applied: WMC1 uses the nominal weight of 1 for each function, and hence measures the number of functions, WMCv uses a weighting function which is 1 for functions accessible to other modules, 0 for private functions.
*   DIT = Depth of inheritance tree  
    The length of the longest path of inheritance ending at the current module. The deeper the inheritance tree for a module, the harder it may be to predict its behaviour. On the other hand, increasing depth gives the potential of greater reuse by the current module of behaviour defined for ancestor classes.
*   NOC = Number of children  
    The number of modules which inherit directly from the current module. Moderate values of this measure indicate scope for reuse, however high values may indicate an inappropriate abstraction in the design.
*   CBO = Coupling between objects  
    The number of other modules which are coupled to the current module either as a client or a supplier. Excessive coupling indicates weakness of module encapsulation and may inhibit reuse.

The label cell for each row in this table provides a link to the module summary table in the detailed report for the module in question

<table border="" width="100%">

<tbody>

<tr>

<th bgcolor="AQUA" width="50%">Module Name</th>

<th bgcolor="AQUA" width="10%">WMC1</th>

<th bgcolor="AQUA" width="10%">WMCv</th>

<th bgcolor="AQUA" width="10%">DIT</th>

<th bgcolor="AQUA" width="10%">NOC</th>

<th bgcolor="AQUA" width="10%">CBO</th>

</tr>

<tr>

<td>[T](T.html#summary)</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

</tr>

<tr>

<td>[anonymous](anonymous.html#summary)</td>

<td align="RIGHT" bgcolor="YELLOW">_37_</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

</tr>

<tr>

<td>[std](std.html#summary)</td>

<td align="RIGHT">1</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

</tr>

<tr>

<td>[vector](vector.html#summary)</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

</tr>

</tbody>

</table>

# <a name="structsum">Structural Metrics Summary</a>

*   FI = Fan-in  
    The number of other modules which pass information into the current module.
*   FO = Fan-out  
    The number of other modules into which the current module passes information
*   IF4 = Information Flow measure  
    A composite measure of structural complexity, calculated as the square of the product of the fan-in and fan-out of a single module. Proposed by Henry and Kafura.

Note that the fan-in and fan-out are calculated by examining the interface of each module. As noted above, three variants of each each of these measures are presented: a count restricted to the part of the interface which is externally visible, a count which only includes relationships which imply the client module needs to be recompiled if the supplier's implementation changes, and an inclusive count The label cell for each row in this table provides a link to the relationships table in the detailed report for the module in question

<table border="" width="100%">

<tbody>

<tr>

<th bgcolor="AQUA" rowspan="2">Module Name</th>

<th bgcolor="AQUA" colspan="3">Fan-out</th>

<th bgcolor="AQUA" colspan="3">Fan-in</th>

<th bgcolor="AQUA" colspan="3">IF4</th>

</tr>

<tr>

<th bgcolor="AQUA" width="7%">vis</th>

<th bgcolor="AQUA" width="7%">con</th>

<th bgcolor="AQUA" width="7%">inc</th>

<th bgcolor="AQUA" width="7%">vis</th>

<th bgcolor="AQUA" width="7%">con</th>

<th bgcolor="AQUA" width="7%">incl</th>

<th bgcolor="AQUA" width="7%">vis</th>

<th bgcolor="AQUA" width="7%">con</th>

<th bgcolor="AQUA" width="7%">inc</th>

</tr>

<tr>

<td>[T](T.html#structdet)</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

</tr>

<tr>

<td>[anonymous](anonymous.html#structdet)</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

</tr>

<tr>

<td>[std](std.html#structdet)</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

</tr>

<tr>

<td>[vector](vector.html#structdet)</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

<td align="RIGHT">0</td>

</tr>

</tbody>

</table>

# <a name="other">Other Extents</a>

<table border="" width="100%">

<tbody>

<tr>

<th bgcolor="AQUA" width="25%">Location</th>

<th bgcolor="AQUA" width="45%">Text</th>

<th bgcolor="AQUA" width="10%">LOC</th>

<th bgcolor="AQUA" width="10%">COM</th>

<th bgcolor="AQUA" width="10%">MVG</th>

</tr>

<tr>

<td>`[assets.cxx:1](cccc_src.html#assets.cxx:         1)`  
</td>

<td><file scope items></td>

<td align="RIGHT">55</td>

<td align="RIGHT">66</td>

<td align="RIGHT">0</td>

</tr>

</tbody>

</table>

# <a name="infocccc">About CCCC</a>

This report was generated by the program CCCC, which is FREELY REDISTRIBUTABLE but carries NO WARRANTY.

CCCC was developed by Tim Littlefair. as part of a PhD research project. This project is now completed and descriptions of the findings can be accessed at [http://www.chs.ecu.edu.au/~tlittlef](http://www.chs.ecu.edu.au/~tlittlef).

User support for CCCC can be obtained by [mailing the list cccc-users@lists.sourceforge.net](mailto:cccc-users@lists.sourceforge.net).

Please also visit the CCCC development website at [http://cccc.sourceforge.net](http://cccc.sourceforge.net).
