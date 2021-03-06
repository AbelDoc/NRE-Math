<!-- HTML header for doxygen 1.8.8-->
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <!-- For Mobile Devices -->
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <meta http-equiv="Content-Type" content="text/xhtml;charset=UTF-8"/>
        <meta name="generator" content="Doxygen 1.8.11"/>
        <script type="text/javascript" src="../../js/jquery-2.1.1.min.js"></script>
        <title>NRE-Math: /mnt/c/Users/abell/Documents/GitHub/NRE-Math/src/Math/NRE_Math.hpp File Reference</title>
        <!--<link href="tabs.css" rel="stylesheet" type="text/css"/>-->
        <script type="text/javascript" src="dynsections.js"></script>
        <link href="search/search.css" rel="stylesheet" type="text/css"/>
<script type="text/javascript" src="search/searchdata.js"></script>
<script type="text/javascript" src="search/search.js"></script>
<script type="text/javascript">
  $(document).ready(function() { init_search(); });
</script>
        <link href="doxygen.css" rel="stylesheet" type="text/css" />
        <link href="style.css" rel="stylesheet" type="text/css"/>
        <link href='https://fonts.googleapis.com/css?family=Roboto+Slab' rel='stylesheet' type='text/css'>
        <?php
            include '../../php/navigation.php';
            if (!isset($_COOKIE["theme"]) || $_COOKIE["theme"] == "dark") {
                echo '<link href="../../css/dark/bootstrap.css" rel="stylesheet">';
            } else {
                echo '<link href="../../css/light/bootstrap.css" rel="stylesheet">';
            }
        ?>
        <script src="../../js/bootstrap.min.js"></script>
        <script type="text/javascript" src="doxy-boot.js"></script>
    </head>
    <body>
        <div class="container-fluid">
            <header class="page-header">
                <a href="../../../index.php">
                    <img src="../../img/Logo.png" class="logo img-responsive"/>
                </a>
            </header>
            <?php addNavigationBarInl(false); ?>
            <div id="top" class="row"><!-- do not remove this div, it is closed by doxygen! -->
                <div class="col-lg-12">
                    <div class="panel panel-default">
                        <div class="panel-body">
<!-- end header part -->
<!-- Generated by Doxygen 1.8.11 -->
<script type="text/javascript">
var searchBox = new SearchBox("searchBox", "search",false,'Search');
</script>
  <div id="navrow1" class="tabs">
    <ul class="tablist">
      <li><a href="index.php"><span>Main&#160;Page</span></a></li>
      <li><a href="namespaces.php"><span>Namespaces</span></a></li>
      <li><a href="annotated.php"><span>Classes</span></a></li>
      <li class="current"><a href="files.php"><span>Files</span></a></li>
      <li>
        <div id="MSearchBox" class="MSearchBoxInactive">
        <span class="left">
          <img id="MSearchSelect" src="search/mag_sel.png"
               onmouseover="return searchBox.OnSearchSelectShow()"
               onmouseout="return searchBox.OnSearchSelectHide()"
               alt=""/>
          <input type="text" id="MSearchField" value="Search" accesskey="S"
               onfocus="searchBox.OnSearchFieldFocus(true)" 
               onblur="searchBox.OnSearchFieldFocus(false)" 
               onkeyup="searchBox.OnSearchFieldChange(event)"/>
          </span><span class="right">
            <a id="MSearchClose" href="javascript:searchBox.CloseResultsWindow()"><img id="MSearchCloseImg" border="0" src="search/close.png" alt=""/></a>
          </span>
        </div>
      </li>
    </ul>
  </div>
  <div id="navrow2" class="tabs2">
    <ul class="tablist">
      <li><a href="files.php"><span>File&#160;List</span></a></li>
      <li><a href="globals.php"><span>File&#160;Members</span></a></li>
    </ul>
  </div>
<!-- window showing the filter options -->
<div id="MSearchSelectWindow"
     onmouseover="return searchBox.OnSearchSelectShow()"
     onmouseout="return searchBox.OnSearchSelectHide()"
     onkeydown="return searchBox.OnSearchSelectKey(event)">
</div>

<!-- iframe showing the search results (closed by default) -->
<div id="MSearchResultsWindow">
<iframe src="javascript:void(0)" frameborder="0" 
        name="MSearchResults" id="MSearchResults">
</iframe>
</div>

<div id="nav-path" class="navpath">
  <ul>
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_3813464283bee2267f39dcf080a84d74.php">Math</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="summary">
<a href="#nested-classes">Classes</a> &#124;
<a href="#namespaces">Namespaces</a> &#124;
<a href="#typedef-members">Typedefs</a> &#124;
<a href="#func-members">Functions</a> &#124;
<a href="#var-members">Variables</a>  </div>
  <div class="headertitle">
<div class="title">NRE_Math.hpp File Reference</div>  </div>
</div><!--header-->
<div class="contents">

<p>Implementation of <a class="el" href="namespace_math.php" title="Math&#39;s API. ">Math</a>'s API's function.  
<a href="#details">More...</a></p>
<div class="textblock"><code>#include &lt;cmath&gt;</code><br />
<code>#include &lt;type_traits&gt;</code><br />
</div>
<p><a href="_math_2_n_r_e___math_8hpp_source.php">Go to the source code of this file.</a></p>
<table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="nested-classes"></a>
Classes</h2></td></tr>
<tr class="memitem:"><td class="memItemLeft" align="right" valign="top">class &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="struct_n_r_e_1_1_math_1_1_arithmetic_checker.php">NRE::Math::ArithmeticChecker&lt;... &gt;</a></td></tr>
<tr class="memdesc:"><td class="mdescLeft">&#160;</td><td class="mdescRight">Template structure allowing compile-time check on template parameters if they are arithmetic or not.  <a href="struct_n_r_e_1_1_math_1_1_arithmetic_checker.php#details">More...</a><br /></td></tr>
<tr class="separator:"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:"><td class="memItemLeft" align="right" valign="top">struct &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="struct_n_r_e_1_1_math_1_1_arithmetic_checker_3_01_t1_00_01_tn_8_8_8_01_4.php">NRE::Math::ArithmeticChecker&lt; T1, Tn... &gt;</a></td></tr>
<tr class="separator:"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:"><td class="memItemLeft" align="right" valign="top">struct &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="struct_n_r_e_1_1_math_1_1_arithmetic_checker_3_01_t1_01_4.php">NRE::Math::ArithmeticChecker&lt; T1 &gt;</a></td></tr>
<tr class="separator:"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table><table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="namespaces"></a>
Namespaces</h2></td></tr>
<tr class="memitem:namespace_n_r_e"><td class="memItemLeft" align="right" valign="top"> &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="namespace_n_r_e.php">NRE</a></td></tr>
<tr class="memdesc:namespace_n_r_e"><td class="mdescLeft">&#160;</td><td class="mdescRight">The NearlyRealEngine's global namespace. <br /></td></tr>
<tr class="separator:"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:namespace_math"><td class="memItemLeft" align="right" valign="top"> &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="namespace_math.php">Math</a></td></tr>
<tr class="memdesc:namespace_math"><td class="mdescLeft">&#160;</td><td class="mdescRight"><a class="el" href="namespace_math.php" title="Math&#39;s API. ">Math</a>'s API. <br /></td></tr>
<tr class="separator:"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table><table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="typedef-members"></a>
Typedefs</h2></td></tr>
<tr class="memitem:a1202e62391de93b7179399a05563c746"><td class="memTemplParams" colspan="2">template&lt;class... Tn&gt; </td></tr>
<tr class="memitem:a1202e62391de93b7179399a05563c746"><td class="memTemplItemLeft" align="right" valign="top">using&#160;</td><td class="memTemplItemRight" valign="bottom"><a class="el" href="_math_2_n_r_e___math_8hpp.php#a1202e62391de93b7179399a05563c746">NRE::Math::UseIfArithmetic</a> = std::enable_if_t&lt; ArithmeticCheckerV&lt; Tn... &gt;&gt;</td></tr>
<tr class="separator:a1202e62391de93b7179399a05563c746"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table><table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="func-members"></a>
Functions</h2></td></tr>
<tr class="memitem:a296fb149791d6f1512ecb640697f7a9d"><td class="memTemplParams" colspan="2">template&lt;class T , class K , typename std::enable_if_t&lt; std::is_floating_point&lt; std::common_type_t&lt; T, K &gt;&gt;::value, int &gt;  = 0&gt; </td></tr>
<tr class="memitem:a296fb149791d6f1512ecb640697f7a9d"><td class="memTemplItemLeft" align="right" valign="top">constexpr bool&#160;</td><td class="memTemplItemRight" valign="bottom"><a class="el" href="_math_2_n_r_e___math_8hpp.php#a296fb149791d6f1512ecb640697f7a9d">NRE::Math::equal</a> (T a, K b)</td></tr>
<tr class="separator:a296fb149791d6f1512ecb640697f7a9d"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:a14c9467bb40a8410763c5783a056839e"><td class="memTemplParams" colspan="2">template&lt;class T , class K &gt; </td></tr>
<tr class="memitem:a14c9467bb40a8410763c5783a056839e"><td class="memTemplItemLeft" align="right" valign="top">constexpr bool&#160;</td><td class="memTemplItemRight" valign="bottom"><a class="el" href="_math_2_n_r_e___math_8hpp.php#a14c9467bb40a8410763c5783a056839e">NRE::Math::almostEqual</a> (T a, K b)</td></tr>
<tr class="separator:a14c9467bb40a8410763c5783a056839e"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:a59f1ae1feff8a4d64bba70efedfffd53"><td class="memTemplParams" colspan="2">template&lt;class T , typename  = UseIfArithmetic&lt;T&gt;&gt; </td></tr>
<tr class="memitem:a59f1ae1feff8a4d64bba70efedfffd53"><td class="memTemplItemLeft" align="right" valign="top">constexpr T&#160;</td><td class="memTemplItemRight" valign="bottom"><a class="el" href="_math_2_n_r_e___math_8hpp.php#a59f1ae1feff8a4d64bba70efedfffd53">NRE::Math::lerp</a> (T const &amp;a, T const &amp;b, float const &amp;f)</td></tr>
<tr class="separator:a59f1ae1feff8a4d64bba70efedfffd53"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table><table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="var-members"></a>
Variables</h2></td></tr>
<tr class="memitem:afe8b0dbf09256f60552e15fd31a3e650"><td class="memTemplParams" colspan="2">template&lt;class... Tn&gt; </td></tr>
<tr class="memitem:afe8b0dbf09256f60552e15fd31a3e650"><td class="memTemplItemLeft" align="right" valign="top">constexpr bool&#160;</td><td class="memTemplItemRight" valign="bottom"><a class="el" href="_math_2_n_r_e___math_8hpp.php#afe8b0dbf09256f60552e15fd31a3e650">NRE::Math::ArithmeticCheckerV</a> = ArithmeticChecker&lt;Tn...&gt;::value</td></tr>
<tr class="separator:afe8b0dbf09256f60552e15fd31a3e650"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table>
<a name="details" id="details"></a><h2 class="groupheader">Detailed Description</h2>
<div class="textblock"><p>Implementation of <a class="el" href="namespace_math.php" title="Math&#39;s API. ">Math</a>'s API's function. </p>
<dl class="section author"><dt>Author</dt><dd>Louis ABEL </dd></dl>
<dl class="section date"><dt>Date</dt><dd>03/04/2019 </dd></dl>
<dl class="section copyright"><dt>Copyright</dt><dd>CC-BY-NC-SA </dd></dl>
</div><h2 class="groupheader">Typedef Documentation</h2>
<a class="anchor" id="file_a1202e62391de93b7179399a05563c746"></a>
<div class="memitem">
<div class="memproto">
<div class="memtemplate">
template&lt;class... Tn&gt; </div>
      <table class="memname">
        <tr>
          <td class="memname">using <a class="el" href="_math_2_n_r_e___math_8hpp.php#a1202e62391de93b7179399a05563c746">NRE::Math::UseIfArithmetic</a> = typedef std::enable_if_t&lt;ArithmeticCheckerV&lt;Tn...&gt;&gt;</td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Allow to enable a function if all given template parameters are arithmetics type </p>

</div>
</div>
<h2 class="groupheader">Function Documentation</h2>
<a class="anchor" id="file_a14c9467bb40a8410763c5783a056839e"></a>
<div class="memitem">
<div class="memproto">
<div class="memtemplate">
template&lt;class T , class K &gt; </div>
      <table class="memname">
        <tr>
          <td class="memname">constexpr bool NRE::Math::almostEqual </td>
          <td>(</td>
          <td class="paramtype">T&#160;</td>
          <td class="paramname"><em>a</em>, </td>
        </tr>
        <tr>
          <td class="paramkey"></td>
          <td></td>
          <td class="paramtype">K&#160;</td>
          <td class="paramname"><em>b</em>&#160;</td>
        </tr>
        <tr>
          <td></td>
          <td>)</td>
          <td></td><td></td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Test if 2 objects are almost equals (usefull for floating point objects) </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">a</td><td>the first object </td></tr>
    <tr><td class="paramname">b</td><td>the second object </td></tr>
  </table>
  </dd>
</dl>
<dl class="section return"><dt>Returns</dt><dd>if both objets are almost equals </dd></dl>

</div>
</div>
<a class="anchor" id="file_a296fb149791d6f1512ecb640697f7a9d"></a>
<div class="memitem">
<div class="memproto">
<div class="memtemplate">
template&lt;class T , class K , typename std::enable_if_t&lt; std::is_floating_point&lt; std::common_type_t&lt; T, K &gt;&gt;::value, int &gt;  = 0&gt; </div>
      <table class="memname">
        <tr>
          <td class="memname">constexpr bool NRE::Math::equal </td>
          <td>(</td>
          <td class="paramtype">T&#160;</td>
          <td class="paramname"><em>a</em>, </td>
        </tr>
        <tr>
          <td class="paramkey"></td>
          <td></td>
          <td class="paramtype">K&#160;</td>
          <td class="paramname"><em>b</em>&#160;</td>
        </tr>
        <tr>
          <td></td>
          <td>)</td>
          <td></td><td></td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Test the equality of 2 objects </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">a</td><td>the first object </td></tr>
    <tr><td class="paramname">b</td><td>the second object </td></tr>
  </table>
  </dd>
</dl>
<dl class="section return"><dt>Returns</dt><dd>if both objets are equals </dd></dl>

</div>
</div>
<a class="anchor" id="file_a59f1ae1feff8a4d64bba70efedfffd53"></a>
<div class="memitem">
<div class="memproto">
<div class="memtemplate">
template&lt;class T , typename  = UseIfArithmetic&lt;T&gt;&gt; </div>
      <table class="memname">
        <tr>
          <td class="memname">constexpr T NRE::Math::lerp </td>
          <td>(</td>
          <td class="paramtype">T const &amp;&#160;</td>
          <td class="paramname"><em>a</em>, </td>
        </tr>
        <tr>
          <td class="paramkey"></td>
          <td></td>
          <td class="paramtype">T const &amp;&#160;</td>
          <td class="paramname"><em>b</em>, </td>
        </tr>
        <tr>
          <td class="paramkey"></td>
          <td></td>
          <td class="paramtype">float const &amp;&#160;</td>
          <td class="paramname"><em>f</em>&#160;</td>
        </tr>
        <tr>
          <td></td>
          <td>)</td>
          <td></td><td></td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Perform a linear interpolation </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">a</td><td>the first value to interpolate </td></tr>
    <tr><td class="paramname">b</td><td>the second value to interpolate </td></tr>
    <tr><td class="paramname">f</td><td>the scale factor </td></tr>
  </table>
  </dd>
</dl>
<dl class="section return"><dt>Returns</dt><dd>the interpolated value </dd></dl>

</div>
</div>
<h2 class="groupheader">Variable Documentation</h2>
<a class="anchor" id="file_afe8b0dbf09256f60552e15fd31a3e650"></a>
<div class="memitem">
<div class="memproto">
<div class="memtemplate">
template&lt;class... Tn&gt; </div>
      <table class="memname">
        <tr>
          <td class="memname">constexpr bool NRE::Math::ArithmeticCheckerV = ArithmeticChecker&lt;Tn...&gt;::value</td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Shortcut to use <a class="el" href="struct_n_r_e_1_1_math_1_1_arithmetic_checker.php" title="Template structure allowing compile-time check on template parameters if they are arithmetic or not...">ArithmeticChecker</a> internal value </p>

</div>
</div>
</div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
