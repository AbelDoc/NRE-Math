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
        <title>NRE-Math: /mnt/c/Users/abell/Documents/GitHub/NRE-Math/src/Math/Curve/Bezier/4D/NRE_BezierCurve4D.hpp Source File</title>
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
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_3813464283bee2267f39dcf080a84d74.php">Math</a></li><li class="navelem"><a class="el" href="dir_732818e93b72bb0dfd477c5bec1e8d99.php">Curve</a></li><li class="navelem"><a class="el" href="dir_70006416f45ccac6628fade1908531f2.php">Bezier</a></li><li class="navelem"><a class="el" href="dir_4cb2f31512a0324f40e2ec79e38adf51.php">4D</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="headertitle">
<div class="title">NRE_BezierCurve4D.hpp</div>  </div>
</div><!--header-->
<div class="contents">
<a href="_n_r_e___bezier_curve4_d_8hpp.php">Go to the documentation of this file.</a><div class="fragment"><div class="line"><a name="l00001"></a><span class="lineno">    1</span>&#160;</div><div class="line"><a name="l00010"></a><span class="lineno">   10</span>&#160;<span class="preprocessor">     #pragma once</span></div><div class="line"><a name="l00011"></a><span class="lineno">   11</span>&#160;</div><div class="line"><a name="l00012"></a><span class="lineno">   12</span>&#160;<span class="preprocessor">     #include &lt;Utility/Vector/NRE_Vector.hpp&gt;</span></div><div class="line"><a name="l00013"></a><span class="lineno">   13</span>&#160;<span class="preprocessor">     #include &quot;../../../Vector/4D/NRE_Vector4D.hpp&quot;</span></div><div class="line"><a name="l00014"></a><span class="lineno">   14</span>&#160;</div><div class="line"><a name="l00015"></a><span class="lineno">   15</span>&#160;</div><div class="line"><a name="l00020"></a><span class="lineno">   20</span>&#160;    <span class="keyword">namespace </span><a class="code" href="namespace_n_r_e.php">NRE</a> {</div><div class="line"><a name="l00025"></a><span class="lineno">   25</span>&#160;        <span class="keyword">namespace </span><a class="code" href="namespace_math.php">Math</a> {</div><div class="line"><a name="l00026"></a><span class="lineno">   26</span>&#160;</div><div class="line"><a name="l00031"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php">   31</a></span>&#160;            <span class="keyword">class </span><a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php">BezierCurve4D</a> {</div><div class="line"><a name="l00032"></a><span class="lineno">   32</span>&#160;                <span class="keyword">private</span>:    <span class="comment">//Fields</span></div><div class="line"><a name="l00033"></a><span class="lineno">   33</span>&#160;                    Utility::Vector&lt;Point4D&lt;float&gt;&gt; controls;   </div><div class="line"><a name="l00035"></a><span class="lineno">   35</span>&#160;                <span class="keyword">public</span>:    <span class="comment">// Methods</span></div><div class="line"><a name="l00036"></a><span class="lineno">   36</span>&#160;                    <span class="comment">//## Constructor ##//</span></div><div class="line"><a name="l00040"></a><span class="lineno">   40</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#ac2c5db9079a354e315a9791e605a4c0f">BezierCurve4D</a>() = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00045"></a><span class="lineno">   45</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#ac2c5db9079a354e315a9791e605a4c0f">BezierCurve4D</a>(std::initializer_list&lt;<a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;float&gt;</a>&gt; points);</div><div class="line"><a name="l00050"></a><span class="lineno">   50</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#ac2c5db9079a354e315a9791e605a4c0f">BezierCurve4D</a>(Utility::Vector&lt;<a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;float&gt;</a>&gt; &amp;&amp; c);</div><div class="line"><a name="l00051"></a><span class="lineno">   51</span>&#160;</div><div class="line"><a name="l00052"></a><span class="lineno">   52</span>&#160;                    <span class="comment">//## Copy-Constructor ##//</span></div><div class="line"><a name="l00057"></a><span class="lineno">   57</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#ac2c5db9079a354e315a9791e605a4c0f">BezierCurve4D</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php">BezierCurve4D</a> <span class="keyword">const</span>&amp; c) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00058"></a><span class="lineno">   58</span>&#160;</div><div class="line"><a name="l00059"></a><span class="lineno">   59</span>&#160;                    <span class="comment">//## Move-Constructor ##//</span></div><div class="line"><a name="l00064"></a><span class="lineno">   64</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#ac2c5db9079a354e315a9791e605a4c0f">BezierCurve4D</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php">BezierCurve4D</a> &amp;&amp; c) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00065"></a><span class="lineno">   65</span>&#160;</div><div class="line"><a name="l00066"></a><span class="lineno">   66</span>&#160;                    <span class="comment">//## Deconstructor ##//</span></div><div class="line"><a name="l00070"></a><span class="lineno">   70</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#a55cf4d9eff91a6895acb187e2414bfa8">~BezierCurve4D</a>() = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00071"></a><span class="lineno">   71</span>&#160;</div><div class="line"><a name="l00072"></a><span class="lineno">   72</span>&#160;                    <span class="comment">//## Getter ##//</span></div><div class="line"><a name="l00078"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#af8ace4b3107b7a451b393f7cd096d64a">   78</a></span>&#160;<span class="comment"></span>                        <span class="keyword">inline</span> <a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;float&gt;</a> <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#af8ace4b3107b7a451b393f7cd096d64a">getPoint</a>(std::size_t index)<span class="keyword"> const </span>{</div><div class="line"><a name="l00079"></a><span class="lineno">   79</span>&#160;                            <span class="keywordflow">return</span> controls[index];</div><div class="line"><a name="l00080"></a><span class="lineno">   80</span>&#160;                        }</div><div class="line"><a name="l00085"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#ae5fcb54b717ecb456024df099a36f6f6">   85</a></span>&#160;                        <span class="keyword">inline</span> std::size_t <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#ae5fcb54b717ecb456024df099a36f6f6">getSize</a>()<span class="keyword"> const </span>{</div><div class="line"><a name="l00086"></a><span class="lineno">   86</span>&#160;                            <span class="keywordflow">return</span> controls.getSize();</div><div class="line"><a name="l00087"></a><span class="lineno">   87</span>&#160;                        }</div><div class="line"><a name="l00088"></a><span class="lineno">   88</span>&#160;</div><div class="line"><a name="l00089"></a><span class="lineno">   89</span>&#160;                    <span class="comment">//## Access Operator ##//</span></div><div class="line"><a name="l00096"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#ae7a66dd96aa0615bc4d6c04dde61d83a">   96</a></span>&#160;<span class="comment"></span>                        <span class="keyword">inline</span> <a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;float&gt;</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#ae7a66dd96aa0615bc4d6c04dde61d83a">operator []</a>(std::size_t index) {</div><div class="line"><a name="l00097"></a><span class="lineno">   97</span>&#160;                            <span class="keywordflow">return</span> controls[index];</div><div class="line"><a name="l00098"></a><span class="lineno">   98</span>&#160;                        }</div><div class="line"><a name="l00105"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#aa1c7c91ef3273975336944d8647a808f">  105</a></span>&#160;                         <span class="keyword">inline</span> <a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;float&gt;</a> <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#ae7a66dd96aa0615bc4d6c04dde61d83a">operator []</a>(std::size_t index)<span class="keyword"> const</span>{</div><div class="line"><a name="l00106"></a><span class="lineno">  106</span>&#160;                             <span class="keywordflow">return</span> controls[index];</div><div class="line"><a name="l00107"></a><span class="lineno">  107</span>&#160;                         }</div><div class="line"><a name="l00108"></a><span class="lineno">  108</span>&#160;</div><div class="line"><a name="l00109"></a><span class="lineno">  109</span>&#160;                    <span class="comment">//## Assignment Operator ##//</span></div><div class="line"><a name="l00115"></a><span class="lineno">  115</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php">BezierCurve4D</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#a5d40d8cd0a22a3dec6153b16fcff37b2">operator =</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php">BezierCurve4D</a> <span class="keyword">const</span>&amp; c) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00121"></a><span class="lineno">  121</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php">BezierCurve4D</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#a5d40d8cd0a22a3dec6153b16fcff37b2">operator =</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php">BezierCurve4D</a> &amp;&amp; c) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00122"></a><span class="lineno">  122</span>&#160;</div><div class="line"><a name="l00123"></a><span class="lineno">  123</span>&#160;                    <span class="comment">//## Stream Operator ##//</span></div><div class="line"><a name="l00128"></a><span class="lineno">  128</span>&#160;<span class="comment"></span>                        Utility::String <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#ae329cb8195c2e84597f8dcaf631b2c6d">toString</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00129"></a><span class="lineno">  129</span>&#160;            };</div><div class="line"><a name="l00130"></a><span class="lineno">  130</span>&#160;</div><div class="line"><a name="l00137"></a><span class="lineno">  137</span>&#160;            std::ostream&amp; operator &lt;&lt;(std::ostream&amp; stream, <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php">BezierCurve4D</a> <span class="keyword">const</span>&amp; o);</div><div class="line"><a name="l00138"></a><span class="lineno">  138</span>&#160;        }</div><div class="line"><a name="l00139"></a><span class="lineno">  139</span>&#160;    }</div><div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve4_d_php_a5d40d8cd0a22a3dec6153b16fcff37b2"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#a5d40d8cd0a22a3dec6153b16fcff37b2">NRE::Math::BezierCurve4D::operator=</a></div><div class="ttdeci">BezierCurve4D &amp; operator=(BezierCurve4D const &amp;c)=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve4_d_php_af8ace4b3107b7a451b393f7cd096d64a"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#af8ace4b3107b7a451b393f7cd096d64a">NRE::Math::BezierCurve4D::getPoint</a></div><div class="ttdeci">Point4D&lt; float &gt; const &amp; getPoint(std::size_t index) const </div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve4D.hpp:78</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve4_d_php_ac2c5db9079a354e315a9791e605a4c0f"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#ac2c5db9079a354e315a9791e605a4c0f">NRE::Math::BezierCurve4D::BezierCurve4D</a></div><div class="ttdeci">BezierCurve4D()=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve4_d_php_ae329cb8195c2e84597f8dcaf631b2c6d"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#ae329cb8195c2e84597f8dcaf631b2c6d">NRE::Math::BezierCurve4D::toString</a></div><div class="ttdeci">Utility::String toString() const </div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve4D.cpp:23</div></div>
<div class="ttc" id="namespace_math_php"><div class="ttname"><a href="namespace_math.php">Math</a></div><div class="ttdoc">Math&amp;#39;s API. </div></div>
<div class="ttc" id="namespace_n_r_e_php"><div class="ttname"><a href="namespace_n_r_e.php">NRE</a></div><div class="ttdoc">The NearlyRealEngine&amp;#39;s global namespace. </div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve3D.cpp:14</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_vector4_d_php"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_vector4_d.php">NRE::Math::Vector4D</a></div><div class="ttdoc">A cartesian 4D vector, 3D homogeneous. </div><div class="ttdef"><b>Definition:</b> NRE_Matrix4x4.hpp:33</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve4_d_php_ae7a66dd96aa0615bc4d6c04dde61d83a"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#ae7a66dd96aa0615bc4d6c04dde61d83a">NRE::Math::BezierCurve4D::operator[]</a></div><div class="ttdeci">Point4D&lt; float &gt; &amp; operator[](std::size_t index)</div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve4D.hpp:96</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve4_d_php_ae5fcb54b717ecb456024df099a36f6f6"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#ae5fcb54b717ecb456024df099a36f6f6">NRE::Math::BezierCurve4D::getSize</a></div><div class="ttdeci">std::size_t getSize() const </div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve4D.hpp:85</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve4_d_php_a55cf4d9eff91a6895acb187e2414bfa8"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php#a55cf4d9eff91a6895acb187e2414bfa8">NRE::Math::BezierCurve4D::~BezierCurve4D</a></div><div class="ttdeci">~BezierCurve4D()=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve4_d_php"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve4_d.php">NRE::Math::BezierCurve4D</a></div><div class="ttdoc">Represent a 3D homogeneous Bezier curves with a set of control points. </div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve4D.hpp:31</div></div>
</div><!-- fragment --></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
