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
        <title>NRE-Math: NRE::Math::BezierCurve3D Class Reference</title>
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
      <li class="current"><a href="annotated.php"><span>Classes</span></a></li>
      <li><a href="files.php"><span>Files</span></a></li>
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
      <li><a href="annotated.php"><span>Class&#160;List</span></a></li>
      <li><a href="classes.php"><span>Class&#160;Index</span></a></li>
      <li><a href="hierarchy.php"><span>Class&#160;Hierarchy</span></a></li>
      <li><a href="functions.php"><span>Class&#160;Members</span></a></li>
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
<li class="navelem"><a class="el" href="namespace_n_r_e.php">NRE</a></li><li class="navelem"><b>Math</b></li><li class="navelem"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="summary">
<a href="#pub-methods">Public Member Functions</a> &#124;
<a href="class_n_r_e_1_1_math_1_1_bezier_curve3_d-members.php">List of all members</a>  </div>
  <div class="headertitle">
<div class="title">NRE::Math::BezierCurve3D Class Reference</div>  </div>
</div><!--header-->
<div class="contents">

<p>Represent a 2D homogeneous Bezier curves with a set of control points.  
 <a href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#details">More...</a></p>

<p><code>#include &lt;<a class="el" href="_n_r_e___bezier_curve3_d_8hpp_source.php">NRE_BezierCurve3D.hpp</a>&gt;</code></p>
<div class="dynheader">
Inheritance diagram for NRE::Math::BezierCurve3D:</div>
<div class="dyncontent">
 <div class="center">
  <img src="class_n_r_e_1_1_math_1_1_bezier_curve3_d.png" usemap="#NRE::Math::BezierCurve3D_map" alt=""/>
  <map id="NRE::Math::BezierCurve3D_map" name="NRE::Math::BezierCurve3D_map">
</map>
 </div></div>
<table class="memberdecls">
<tr class="heading"><td colspan="2"><h2 class="groupheader"><a name="pub-methods"></a>
Public Member Functions</h2></td></tr>
<tr class="memitem:ae9834d919c43211705a9ab9fd10dea1d"><td class="memItemLeft" align="right" valign="top">&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#ae9834d919c43211705a9ab9fd10dea1d">BezierCurve3D</a> ()=default</td></tr>
<tr class="separator:ae9834d919c43211705a9ab9fd10dea1d"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:a86e23312e33c11a5dd96fa23ef5faeeb"><td class="memItemLeft" align="right" valign="top">&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a86e23312e33c11a5dd96fa23ef5faeeb">BezierCurve3D</a> (std::initializer_list&lt; <a class="el" href="_n_r_e___vector3_d_8hpp.php#a448aee64e4baef60491b182208657c3d">Point3D</a>&lt; float &gt;&gt; points)</td></tr>
<tr class="separator:a86e23312e33c11a5dd96fa23ef5faeeb"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:a862ab044f5cac6e196a5e8b492727e23"><td class="memItemLeft" align="right" valign="top">&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a862ab044f5cac6e196a5e8b492727e23">BezierCurve3D</a> (Utility::Vector&lt; <a class="el" href="_n_r_e___vector3_d_8hpp.php#a448aee64e4baef60491b182208657c3d">Point3D</a>&lt; float &gt;&gt; &amp;&amp;c)</td></tr>
<tr class="separator:a862ab044f5cac6e196a5e8b492727e23"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:ad139d982bb6c0f79dfeca7dcf06393f7"><td class="memItemLeft" align="right" valign="top">&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#ad139d982bb6c0f79dfeca7dcf06393f7">BezierCurve3D</a> (<a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a> const &amp;c)=default</td></tr>
<tr class="separator:ad139d982bb6c0f79dfeca7dcf06393f7"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:a8383e094e83d4a3d8c75f415fc3de876"><td class="memItemLeft" align="right" valign="top">&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a8383e094e83d4a3d8c75f415fc3de876">BezierCurve3D</a> (<a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a> &amp;&amp;c)=default</td></tr>
<tr class="separator:a8383e094e83d4a3d8c75f415fc3de876"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:aad296197dfdc4bfc860d3a2c332def39"><td class="memItemLeft" align="right" valign="top">&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#aad296197dfdc4bfc860d3a2c332def39">~BezierCurve3D</a> ()=default</td></tr>
<tr class="separator:aad296197dfdc4bfc860d3a2c332def39"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:ad76aba00eb1f424e1776737edaab4f69"><td class="memItemLeft" align="right" valign="top"><a class="el" href="_n_r_e___vector3_d_8hpp.php#a448aee64e4baef60491b182208657c3d">Point3D</a>&lt; float &gt; const &amp;&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#ad76aba00eb1f424e1776737edaab4f69">getPoint</a> (std::size_t index) const </td></tr>
<tr class="separator:ad76aba00eb1f424e1776737edaab4f69"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:a6a979821dcf6d858a1e4d751f7a42896"><td class="memItemLeft" align="right" valign="top">std::size_t&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a6a979821dcf6d858a1e4d751f7a42896">getSize</a> () const </td></tr>
<tr class="separator:a6a979821dcf6d858a1e4d751f7a42896"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:a74a49c78163f2125ea4aa6cd73a87f30"><td class="memItemLeft" align="right" valign="top"><a class="el" href="_n_r_e___vector3_d_8hpp.php#a448aee64e4baef60491b182208657c3d">Point3D</a>&lt; float &gt; &amp;&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a74a49c78163f2125ea4aa6cd73a87f30">operator[]</a> (std::size_t index)</td></tr>
<tr class="separator:a74a49c78163f2125ea4aa6cd73a87f30"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:af63579edd5673e1bc4510466bddb78f4"><td class="memItemLeft" align="right" valign="top"><a class="el" href="_n_r_e___vector3_d_8hpp.php#a448aee64e4baef60491b182208657c3d">Point3D</a>&lt; float &gt; const &amp;&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#af63579edd5673e1bc4510466bddb78f4">operator[]</a> (std::size_t index) const </td></tr>
<tr class="separator:af63579edd5673e1bc4510466bddb78f4"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:a4dac44314e1e432b221b1b3b11b2d825"><td class="memItemLeft" align="right" valign="top"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a> &amp;&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a4dac44314e1e432b221b1b3b11b2d825">operator=</a> (<a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a> const &amp;c)=default</td></tr>
<tr class="separator:a4dac44314e1e432b221b1b3b11b2d825"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:a2b04688e57f83fb55ed0cba0adbbcc0e"><td class="memItemLeft" align="right" valign="top"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a> &amp;&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a2b04688e57f83fb55ed0cba0adbbcc0e">operator=</a> (<a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a> &amp;&amp;c)=default</td></tr>
<tr class="separator:a2b04688e57f83fb55ed0cba0adbbcc0e"><td class="memSeparator" colspan="2">&#160;</td></tr>
<tr class="memitem:ae707b6eac71ceb1fa34717872a5be09a"><td class="memItemLeft" align="right" valign="top">Utility::String&#160;</td><td class="memItemRight" valign="bottom"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#ae707b6eac71ceb1fa34717872a5be09a">toString</a> () const </td></tr>
<tr class="separator:ae707b6eac71ceb1fa34717872a5be09a"><td class="memSeparator" colspan="2">&#160;</td></tr>
</table>
<a name="details" id="details"></a><h2 class="groupheader">Detailed Description</h2>
<div class="textblock"><p>Represent a 2D homogeneous Bezier curves with a set of control points. </p>
</div><h2 class="groupheader">Constructor &amp; Destructor Documentation</h2>
<a class="anchor" id="ae9834d919c43211705a9ab9fd10dea1d"></a>
<div class="memitem">
<div class="memproto">
<table class="mlabels">
  <tr>
  <td class="mlabels-left">
      <table class="memname">
        <tr>
          <td class="memname">NRE::Math::BezierCurve3D::BezierCurve3D </td>
          <td>(</td>
          <td class="paramname"></td><td>)</td>
          <td></td>
        </tr>
      </table>
  </td>
  <td class="mlabels-right">
<span class="mlabels"><span class="mlabel">default</span></span>  </td>
  </tr>
</table>
</div><div class="memdoc">
<p>Curve with no control point </p>

</div>
</div>
<a class="anchor" id="a86e23312e33c11a5dd96fa23ef5faeeb"></a>
<div class="memitem">
<div class="memproto">
<table class="mlabels">
  <tr>
  <td class="mlabels-left">
      <table class="memname">
        <tr>
          <td class="memname">NRE::Math::BezierCurve3D::BezierCurve3D </td>
          <td>(</td>
          <td class="paramtype">std::initializer_list&lt; <a class="el" href="_n_r_e___vector3_d_8hpp.php#a448aee64e4baef60491b182208657c3d">Point3D</a>&lt; float &gt;&gt;&#160;</td>
          <td class="paramname"><em>points</em></td><td>)</td>
          <td></td>
        </tr>
      </table>
  </td>
  <td class="mlabels-right">
<span class="mlabels"><span class="mlabel">inline</span></span>  </td>
  </tr>
</table>
</div><div class="memdoc">
<p>Construct the curve from a set of control points </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">points</td><td>the set of control points </td></tr>
  </table>
  </dd>
</dl>

</div>
</div>
<a class="anchor" id="a862ab044f5cac6e196a5e8b492727e23"></a>
<div class="memitem">
<div class="memproto">
<table class="mlabels">
  <tr>
  <td class="mlabels-left">
      <table class="memname">
        <tr>
          <td class="memname">NRE::Math::BezierCurve3D::BezierCurve3D </td>
          <td>(</td>
          <td class="paramtype">Utility::Vector&lt; <a class="el" href="_n_r_e___vector3_d_8hpp.php#a448aee64e4baef60491b182208657c3d">Point3D</a>&lt; float &gt;&gt; &amp;&amp;&#160;</td>
          <td class="paramname"><em>c</em></td><td>)</td>
          <td></td>
        </tr>
      </table>
  </td>
  <td class="mlabels-right">
<span class="mlabels"><span class="mlabel">inline</span></span>  </td>
  </tr>
</table>
</div><div class="memdoc">
<p>Construct the curve from a set of control points </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">c</td><td>the set of control points </td></tr>
  </table>
  </dd>
</dl>

</div>
</div>
<a class="anchor" id="ad139d982bb6c0f79dfeca7dcf06393f7"></a>
<div class="memitem">
<div class="memproto">
<table class="mlabels">
  <tr>
  <td class="mlabels-left">
      <table class="memname">
        <tr>
          <td class="memname">NRE::Math::BezierCurve3D::BezierCurve3D </td>
          <td>(</td>
          <td class="paramtype"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a> const &amp;&#160;</td>
          <td class="paramname"><em>c</em></td><td>)</td>
          <td></td>
        </tr>
      </table>
  </td>
  <td class="mlabels-right">
<span class="mlabels"><span class="mlabel">default</span></span>  </td>
  </tr>
</table>
</div><div class="memdoc">
<p>Copy c into this </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">c</td><td>the object to copy </td></tr>
  </table>
  </dd>
</dl>

</div>
</div>
<a class="anchor" id="a8383e094e83d4a3d8c75f415fc3de876"></a>
<div class="memitem">
<div class="memproto">
<table class="mlabels">
  <tr>
  <td class="mlabels-left">
      <table class="memname">
        <tr>
          <td class="memname">NRE::Math::BezierCurve3D::BezierCurve3D </td>
          <td>(</td>
          <td class="paramtype"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a> &amp;&amp;&#160;</td>
          <td class="paramname"><em>c</em></td><td>)</td>
          <td></td>
        </tr>
      </table>
  </td>
  <td class="mlabels-right">
<span class="mlabels"><span class="mlabel">default</span></span>  </td>
  </tr>
</table>
</div><div class="memdoc">
<p>Move c into this </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">c</td><td>the object to move </td></tr>
  </table>
  </dd>
</dl>

</div>
</div>
<a class="anchor" id="aad296197dfdc4bfc860d3a2c332def39"></a>
<div class="memitem">
<div class="memproto">
<table class="mlabels">
  <tr>
  <td class="mlabels-left">
      <table class="memname">
        <tr>
          <td class="memname">NRE::Math::BezierCurve3D::~BezierCurve3D </td>
          <td>(</td>
          <td class="paramname"></td><td>)</td>
          <td></td>
        </tr>
      </table>
  </td>
  <td class="mlabels-right">
<span class="mlabels"><span class="mlabel">default</span></span>  </td>
  </tr>
</table>
</div><div class="memdoc">
<p><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php" title="Represent a 2D homogeneous Bezier curves with a set of control points. ">BezierCurve3D</a> Deconstructor </p>

</div>
</div>
<h2 class="groupheader">Member Function Documentation</h2>
<a class="anchor" id="ad76aba00eb1f424e1776737edaab4f69"></a>
<div class="memitem">
<div class="memproto">
<table class="mlabels">
  <tr>
  <td class="mlabels-left">
      <table class="memname">
        <tr>
          <td class="memname"><a class="el" href="_n_r_e___vector3_d_8hpp.php#a448aee64e4baef60491b182208657c3d">Point3D</a>&lt;float&gt; const&amp; NRE::Math::BezierCurve3D::getPoint </td>
          <td>(</td>
          <td class="paramtype">std::size_t&#160;</td>
          <td class="paramname"><em>index</em></td><td>)</td>
          <td> const</td>
        </tr>
      </table>
  </td>
  <td class="mlabels-right">
<span class="mlabels"><span class="mlabel">inline</span></span>  </td>
  </tr>
</table>
</div><div class="memdoc">
<p>Control point getter </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">index</td><td>the point's index </td></tr>
  </table>
  </dd>
</dl>
<dl class="section return"><dt>Returns</dt><dd>the corresponding point </dd></dl>

</div>
</div>
<a class="anchor" id="a6a979821dcf6d858a1e4d751f7a42896"></a>
<div class="memitem">
<div class="memproto">
<table class="mlabels">
  <tr>
  <td class="mlabels-left">
      <table class="memname">
        <tr>
          <td class="memname">std::size_t NRE::Math::BezierCurve3D::getSize </td>
          <td>(</td>
          <td class="paramname"></td><td>)</td>
          <td> const</td>
        </tr>
      </table>
  </td>
  <td class="mlabels-right">
<span class="mlabels"><span class="mlabel">inline</span></span>  </td>
  </tr>
</table>
</div><div class="memdoc">
<p>Size getter </p><dl class="section return"><dt>Returns</dt><dd>the number of control points </dd></dl>

</div>
</div>
<a class="anchor" id="a4dac44314e1e432b221b1b3b11b2d825"></a>
<div class="memitem">
<div class="memproto">
<table class="mlabels">
  <tr>
  <td class="mlabels-left">
      <table class="memname">
        <tr>
          <td class="memname"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a>&amp; NRE::Math::BezierCurve3D::operator= </td>
          <td>(</td>
          <td class="paramtype"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a> const &amp;&#160;</td>
          <td class="paramname"><em>c</em></td><td>)</td>
          <td></td>
        </tr>
      </table>
  </td>
  <td class="mlabels-right">
<span class="mlabels"><span class="mlabel">default</span></span>  </td>
  </tr>
</table>
</div><div class="memdoc">
<p>Copy c into this </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">c</td><td>the object to copy into this </td></tr>
  </table>
  </dd>
</dl>
<dl class="section return"><dt>Returns</dt><dd>the reference of himself </dd></dl>

</div>
</div>
<a class="anchor" id="a2b04688e57f83fb55ed0cba0adbbcc0e"></a>
<div class="memitem">
<div class="memproto">
<table class="mlabels">
  <tr>
  <td class="mlabels-left">
      <table class="memname">
        <tr>
          <td class="memname"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a>&amp; NRE::Math::BezierCurve3D::operator= </td>
          <td>(</td>
          <td class="paramtype"><a class="el" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a> &amp;&amp;&#160;</td>
          <td class="paramname"><em>c</em></td><td>)</td>
          <td></td>
        </tr>
      </table>
  </td>
  <td class="mlabels-right">
<span class="mlabels"><span class="mlabel">default</span></span>  </td>
  </tr>
</table>
</div><div class="memdoc">
<p>Move c into this </p><dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">c</td><td>the object to move into this </td></tr>
  </table>
  </dd>
</dl>
<dl class="section return"><dt>Returns</dt><dd>the reference of himself </dd></dl>

</div>
</div>
<a class="anchor" id="a74a49c78163f2125ea4aa6cd73a87f30"></a>
<div class="memitem">
<div class="memproto">
<table class="mlabels">
  <tr>
  <td class="mlabels-left">
      <table class="memname">
        <tr>
          <td class="memname"><a class="el" href="_n_r_e___vector3_d_8hpp.php#a448aee64e4baef60491b182208657c3d">Point3D</a>&lt;float&gt;&amp; NRE::Math::BezierCurve3D::operator[] </td>
          <td>(</td>
          <td class="paramtype">std::size_t&#160;</td>
          <td class="paramname"><em>index</em></td><td>)</td>
          <td></td>
        </tr>
      </table>
  </td>
  <td class="mlabels-right">
<span class="mlabels"><span class="mlabel">inline</span></span>  </td>
  </tr>
</table>
</div><div class="memdoc">
<p>Return a reference on a curve's object </p><dl class="section warning"><dt>Warning</dt><dd>No range check performed </dd></dl>
<dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">index</td><td>the object's index </td></tr>
  </table>
  </dd>
</dl>
<dl class="section return"><dt>Returns</dt><dd>the object's reference </dd></dl>

</div>
</div>
<a class="anchor" id="af63579edd5673e1bc4510466bddb78f4"></a>
<div class="memitem">
<div class="memproto">
<table class="mlabels">
  <tr>
  <td class="mlabels-left">
      <table class="memname">
        <tr>
          <td class="memname"><a class="el" href="_n_r_e___vector3_d_8hpp.php#a448aee64e4baef60491b182208657c3d">Point3D</a>&lt;float&gt; const&amp; NRE::Math::BezierCurve3D::operator[] </td>
          <td>(</td>
          <td class="paramtype">std::size_t&#160;</td>
          <td class="paramname"><em>index</em></td><td>)</td>
          <td> const</td>
        </tr>
      </table>
  </td>
  <td class="mlabels-right">
<span class="mlabels"><span class="mlabel">inline</span></span>  </td>
  </tr>
</table>
</div><div class="memdoc">
<p>Return a const reference on a curve's object </p><dl class="section warning"><dt>Warning</dt><dd>No range check performed </dd></dl>
<dl class="params"><dt>Parameters</dt><dd>
  <table class="params">
    <tr><td class="paramname">index</td><td>the object's index </td></tr>
  </table>
  </dd>
</dl>
<dl class="section return"><dt>Returns</dt><dd>the object's reference </dd></dl>

</div>
</div>
<a class="anchor" id="ae707b6eac71ceb1fa34717872a5be09a"></a>
<div class="memitem">
<div class="memproto">
      <table class="memname">
        <tr>
          <td class="memname">Utility::String NRE::Math::BezierCurve3D::toString </td>
          <td>(</td>
          <td class="paramname"></td><td>)</td>
          <td> const</td>
        </tr>
      </table>
</div><div class="memdoc">
<p>Convert the curve into a string </p><dl class="section return"><dt>Returns</dt><dd>the converted curve </dd></dl>

</div>
</div>
<hr/>The documentation for this class was generated from the following file:<ul>
<li>/mnt/c/Users/abell/Documents/GitHub/NRE-Math/src/Math/Curve/Bezier/3D/<a class="el" href="_n_r_e___bezier_curve3_d_8hpp_source.php">NRE_BezierCurve3D.hpp</a></li>
</ul>
</div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
