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
        <title>NRE-Math: /mnt/c/Users/abell/Documents/GitHub/NRE-Math/src/Math/Vector/2D/NRE_Vector2D.hpp File Reference</title>
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
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_3813464283bee2267f39dcf080a84d74.php">Math</a></li><li class="navelem"><a class="el" href="dir_4005e686f12f80d4c04432a698da12f8.php">Vector</a></li><li class="navelem"><a class="el" href="dir_297243e99995d447ae342dcea0dbde2d.php">2D</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="summary">
<a href="#nested-classes">Classes</a> &#124;
<a href="#namespaces">Namespaces</a> &#124;
<a href="#typedef-members">Typedefs</a> &#124;
<a href="#func-members">Functions</a>  </div>
  <div class="headertitle">
<div class="title">NRE_Vector2D.hpp File Reference</div>  </div>
</div><!--header-->
<div class="contents">

<p>Declaration of <a class="el" href="namespace_math.php" title="Math&#39;s API. ">Math</a>'s API's Object : Vector2D.  
<a href="#details">More...</a></p>
<div class="textblock"><code>#include &lt;Utility/String/NRE_String.hpp&gt;</code><br />
<code>#include &lt;Utility/Interfaces/Stringable/NRE_Stringable.hpp&gt;</code><br />
<code>#include &quot;<a class="el" href="_math_2_n_r_e___math_8hpp_source.php">../../NRE_Math.hpp</a>&quot;</code><br />
<code>#include &lt;cassert&gt;</code><br />
<code>#include &quot;NRE_Vector2D.tpp&quot;</code><br />
</div>
<p><a href="_n_r_e___vector2_d_8hpp_source.php">Go to the source code of this file.</a></p>
<table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="nested-classes"></a>
Classes</h2></td></tr>
<tr class="memitem:"><td class="memItemLeft" align="right" valign="top">class &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_vector3_d.php">NRE::Math::Vector3D&lt; T &gt;</a></td></tr>
<tr class="memdesc:"><td class="mdescLeft">&#160;</td><td class="mdescRight">A cartesian 3D vector, 2D homogeneous.  <a href="class_n_r_e_1_1_math_1_1_vector3_d.php#details">More...</a><br /></td></tr>
<tr class="separator:"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:"><td class="memItemLeft" align="right" valign="top">class &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_vector4_d.php">NRE::Math::Vector4D&lt; T &gt;</a></td></tr>
<tr class="memdesc:"><td class="mdescLeft">&#160;</td><td class="mdescRight">A cartesian 4D vector, 3D homogeneous.  <a href="class_n_r_e_1_1_math_1_1_vector4_d.php#details">More...</a><br /></td></tr>
<tr class="separator:"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:"><td class="memItemLeft" align="right" valign="top">class &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_vector2_d.php">NRE::Math::Vector2D&lt; T &gt;</a></td></tr>
<tr class="memdesc:"><td class="mdescLeft">&#160;</td><td class="mdescRight">A cartesian 2D vector.  <a href="class_n_r_e_1_1_math_1_1_vector2_d.php#details">More...</a><br /></td></tr>
<tr class="separator:"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:"><td class="memItemLeft" align="right" valign="top">struct &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="structstd_1_1common__type_3_01_n_r_e_1_1_math_1_1_vector2_d_3_01_t_01_4_00_01_n_r_e_1_1_math_1_1_vector2_d_3_01_k_01_4_01_4.php">std::common_type&lt; NRE::Math::Vector2D&lt; T &gt;, NRE::Math::Vector2D&lt; K &gt; &gt;</a></td></tr>
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
<tr class="memitem:namespacestd"><td class="memItemLeft" align="right" valign="top"> &#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="namespacestd.php">std</a></td></tr>
<tr class="memdesc:namespacestd"><td class="mdescLeft">&#160;</td><td class="mdescRight">The stl standard namespace. <br /></td></tr>
<tr class="separator:"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table><table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="typedef-members"></a>
Typedefs</h2></td></tr>
<tr class="memitem:a690b5146906034f4c061a38abee6d8c6"><td class="memTemplParams" colspan="2">template&lt;class T &gt; </td></tr>
<tr class="memitem:a690b5146906034f4c061a38abee6d8c6"><td class="memTemplItemLeft" align="right" valign="top">using&#160;</td><td class="memTemplItemRight" valign="bottom"><a class="el" href="_n_r_e___vector2_d_8hpp.php#a690b5146906034f4c061a38abee6d8c6">NRE::Math::Point2D</a> = Vector2D&lt; T &gt;</td></tr>
<tr class="separator:a690b5146906034f4c061a38abee6d8c6"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table><table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="func-members"></a>
Functions</h2></td></tr>
<tr class="memitem:a006bc15dc253207108534af8c72f902d"><td class="memTemplParams" colspan="2">template&lt;class T , class K , typename  = UseIfArithmetic&lt;K&gt;&gt; </td></tr>
<tr class="memitem:a006bc15dc253207108534af8c72f902d"><td class="memTemplItemLeft" align="right" valign="top">constexpr Vector2D&lt; std::common_type_t&lt; T, K &gt; &gt;&#160;</td><td class="memTemplItemRight" valign="bottom"><a class="el" href="_n_r_e___vector2_d_8hpp.php#a006bc15dc253207108534af8c72f902d">NRE::Math::operator*</a> (K k, Vector2D&lt; T &gt; const &amp;u)</td></tr>
<tr class="separator:a006bc15dc253207108534af8c72f902d"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:a87f3bb1ff3ff303dbaf5c87c8352674a"><td class="memTemplParams" colspan="2">template&lt;class T &gt; </td></tr>
<tr class="memitem:a87f3bb1ff3ff303dbaf5c87c8352674a"><td class="memTemplItemLeft" align="right" valign="top">Vector2D&lt; T &gt;&#160;</td><td class="memTemplItemRight" valign="bottom"><a class="el" href="_n_r_e___vector2_d_8hpp.php#a87f3bb1ff3ff303dbaf5c87c8352674a">NRE::Math::normalize</a> (Vector2D&lt; T &gt; const &amp;u)</td></tr>
<tr class="separator:a87f3bb1ff3ff303dbaf5c87c8352674a"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:ad0ee7ad7832d6312f287d1e862adcfd4"><td class="memTemplParams" colspan="2">template&lt;class T , class K , typename  = UseIfArithmetic&lt;K&gt;&gt; </td></tr>
<tr class="memitem:ad0ee7ad7832d6312f287d1e862adcfd4"><td class="memTemplItemLeft" align="right" valign="top">Vector2D&lt; std::common_type_t&lt; T, K &gt; &gt;&#160;</td><td class="memTemplItemRight" valign="bottom"><a class="el" href="_n_r_e___vector2_d_8hpp.php#ad0ee7ad7832d6312f287d1e862adcfd4">NRE::Math::pow</a> (Vector2D&lt; T &gt; const &amp;u, K k)</td></tr>
<tr class="separator:ad0ee7ad7832d6312f287d1e862adcfd4"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:a2b4a63b7399a395953d5f20df0e2c5b2"><td class="memTemplParams" colspan="2">template&lt;class T , class K &gt; </td></tr>
<tr class="memitem:a2b4a63b7399a395953d5f20df0e2c5b2"><td class="memTemplItemLeft" align="right" valign="top">Vector2D&lt; std::common_type_t&lt; T, K &gt; &gt;&#160;</td><td class="memTemplItemRight" valign="bottom"><a class="el" href="_n_r_e___vector2_d_8hpp.php#a2b4a63b7399a395953d5f20df0e2c5b2">NRE::Math::pow</a> (Vector2D&lt; T &gt; const &amp;u, Vector2D&lt; K &gt; const &amp;p)</td></tr>
<tr class="separator:a2b4a63b7399a395953d5f20df0e2c5b2"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:a94f06e0023c567d982fc8e4238366987"><td class="memTemplParams" colspan="2">template&lt;class T , class K &gt; </td></tr>
<tr class="memitem:a94f06e0023c567d982fc8e4238366987"><td class="memTemplItemLeft" align="right" valign="top">constexpr Vector2D&lt; std::common_type_t&lt; T, K &gt; &gt;&#160;</td><td class="memTemplItemRight" valign="bottom"><a class="el" href="_n_r_e___vector2_d_8hpp.php#a94f06e0023c567d982fc8e4238366987">NRE::Math::reflect</a> (Vector2D&lt; T &gt; const &amp;u, Vector2D&lt; K &gt; const &amp;n)</td></tr>
<tr class="separator:a94f06e0023c567d982fc8e4238366987"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table>
<a name="details" id="details"></a><h2 class="groupheader">Detailed Description</h2>
<div class="textblock"><p>Declaration of <a class="el" href="namespace_math.php" title="Math&#39;s API. ">Math</a>'s API's Object : Vector2D. </p>
<dl class="section author"><dt>Author</dt><dd>Louis ABEL </dd></dl>
<dl class="section date"><dt>Date</dt><dd>27/03/2019 </dd></dl>
<dl class="section copyright"><dt>Copyright</dt><dd>CC-BY-NC-SA </dd></dl>
</div><h2 class="groupheader">Typedef Documentation</h2>
<a class="anchor" id="file_a690b5146906034f4c061a38abee6d8c6"></a>
<div class="memitem">
<div class="memproto">
<div class="memtemplate">
template&lt;class T &gt; </div>
      <table class="memname">
        <tr>
          <td class="memname">using <a class="el" href="_n_r_e___vector2_d_8hpp.php#a690b5146906034f4c061a38abee6d8c6">NRE::Math::Point2D</a> = typedef Vector2D&lt;T&gt;</td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Simple alias for point declaration </p>

</div>
</div>
<h2 class="groupheader">Function Documentation</h2>
<a class="anchor" id="file_a87f3bb1ff3ff303dbaf5c87c8352674a"></a>
<div class="memitem">
<div class="memproto">
<div class="memtemplate">
template&lt;class T &gt; </div>
      <table class="memname">
        <tr>
          <td class="memname">Vector2D&lt;T&gt; NRE::Math::normalize </td>
          <td>(</td>
          <td class="paramtype"><a class="el" href="class_n_r_e_1_1_math_1_1_vector2_d.php">Vector2D</a>&lt; T &gt; const &amp;&#160;</td>
          <td class="paramname"><em>u</em></td><td>)</td>
          <td></td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Return a normalized version of the given vector </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">u</td><td>the vector to normalize </td></tr>
  </table>
  </dd>
</dl>
<dl class="section return"><dt>Returns</dt><dd>the normalized vector </dd></dl>

</div>
</div>
<a class="anchor" id="file_a006bc15dc253207108534af8c72f902d"></a>
<div class="memitem">
<div class="memproto">
<div class="memtemplate">
template&lt;class T , class K , typename  = UseIfArithmetic&lt;K&gt;&gt; </div>
      <table class="memname">
        <tr>
          <td class="memname">constexpr Vector2D&lt;std::common_type_t&lt;T, K&gt; &gt; NRE::Math::operator* </td>
          <td>(</td>
          <td class="paramtype">K&#160;</td>
          <td class="paramname"><em>k</em>, </td>
        </tr>
        <tr>
          <td class="paramkey"></td>
          <td></td>
          <td class="paramtype"><a class="el" href="class_n_r_e_1_1_math_1_1_vector2_d.php">Vector2D</a>&lt; T &gt; const &amp;&#160;</td>
          <td class="paramname"><em>u</em>&#160;</td>
        </tr>
        <tr>
          <td></td>
          <td>)</td>
          <td></td><td></td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Compute the vector resulting in the multiplication of u by k </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">u</td><td>the vector </td></tr>
    <tr><td class="paramname">k</td><td>the multiplication factor </td></tr>
  </table>
  </dd>
</dl>
<dl class="section return"><dt>Returns</dt><dd>the computed vector </dd></dl>

</div>
</div>
<a class="anchor" id="file_ad0ee7ad7832d6312f287d1e862adcfd4"></a>
<div class="memitem">
<div class="memproto">
<div class="memtemplate">
template&lt;class T , class K , typename  = UseIfArithmetic&lt;K&gt;&gt; </div>
      <table class="memname">
        <tr>
          <td class="memname">Vector2D&lt;std::common_type_t&lt;T, K&gt; &gt; NRE::Math::pow </td>
          <td>(</td>
          <td class="paramtype"><a class="el" href="class_n_r_e_1_1_math_1_1_vector2_d.php">Vector2D</a>&lt; T &gt; const &amp;&#160;</td>
          <td class="paramname"><em>u</em>, </td>
        </tr>
        <tr>
          <td class="paramkey"></td>
          <td></td>
          <td class="paramtype">K&#160;</td>
          <td class="paramname"><em>k</em>&#160;</td>
        </tr>
        <tr>
          <td></td>
          <td>)</td>
          <td></td><td></td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Return a vector with components raised to the given power </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">u</td><td>the vector to raise </td></tr>
    <tr><td class="paramname">k</td><td>the power to which to raise the vector </td></tr>
  </table>
  </dd>
</dl>
<dl class="section return"><dt>Returns</dt><dd>the raised vector </dd></dl>

</div>
</div>
<a class="anchor" id="file_a2b4a63b7399a395953d5f20df0e2c5b2"></a>
<div class="memitem">
<div class="memproto">
<div class="memtemplate">
template&lt;class T , class K &gt; </div>
      <table class="memname">
        <tr>
          <td class="memname">Vector2D&lt;std::common_type_t&lt;T, K&gt; &gt; NRE::Math::pow </td>
          <td>(</td>
          <td class="paramtype"><a class="el" href="class_n_r_e_1_1_math_1_1_vector2_d.php">Vector2D</a>&lt; T &gt; const &amp;&#160;</td>
          <td class="paramname"><em>u</em>, </td>
        </tr>
        <tr>
          <td class="paramkey"></td>
          <td></td>
          <td class="paramtype"><a class="el" href="class_n_r_e_1_1_math_1_1_vector2_d.php">Vector2D</a>&lt; K &gt; const &amp;&#160;</td>
          <td class="paramname"><em>p</em>&#160;</td>
        </tr>
        <tr>
          <td></td>
          <td>)</td>
          <td></td><td></td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Return a vector with components raised to the given power </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">u</td><td>the vector to raise </td></tr>
    <tr><td class="paramname">p</td><td>the power to which to raise the vector </td></tr>
  </table>
  </dd>
</dl>
<dl class="section return"><dt>Returns</dt><dd>the raised vector </dd></dl>

</div>
</div>
<a class="anchor" id="file_a94f06e0023c567d982fc8e4238366987"></a>
<div class="memitem">
<div class="memproto">
<div class="memtemplate">
template&lt;class T , class K &gt; </div>
      <table class="memname">
        <tr>
          <td class="memname">constexpr Vector2D&lt;std::common_type_t&lt;T, K&gt; &gt; NRE::Math::reflect </td>
          <td>(</td>
          <td class="paramtype"><a class="el" href="class_n_r_e_1_1_math_1_1_vector2_d.php">Vector2D</a>&lt; T &gt; const &amp;&#160;</td>
          <td class="paramname"><em>u</em>, </td>
        </tr>
        <tr>
          <td class="paramkey"></td>
          <td></td>
          <td class="paramtype"><a class="el" href="class_n_r_e_1_1_math_1_1_vector2_d.php">Vector2D</a>&lt; K &gt; const &amp;&#160;</td>
          <td class="paramname"><em>n</em>&#160;</td>
        </tr>
        <tr>
          <td></td>
          <td>)</td>
          <td></td><td></td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Reflect the given incidence vector with the given normal </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">u</td><td>the vector to reflect </td></tr>
    <tr><td class="paramname">n</td><td>the normal </td></tr>
  </table>
  </dd>
</dl>
<dl class="section return"><dt>Returns</dt><dd>the reflected vector </dd></dl>

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
