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
        <title>NRE-Math: /mnt/c/Users/abell/Documents/GitHub/NRE-Math/src/Math/Curve/Bezier/3D/NRE_BezierCurve3D.hpp Source File</title>
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
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_3813464283bee2267f39dcf080a84d74.php">Math</a></li><li class="navelem"><a class="el" href="dir_732818e93b72bb0dfd477c5bec1e8d99.php">Curve</a></li><li class="navelem"><a class="el" href="dir_70006416f45ccac6628fade1908531f2.php">Bezier</a></li><li class="navelem"><a class="el" href="dir_68c9b736c56a9da6084e0e03ba645a3a.php">3D</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="headertitle">
<div class="title">NRE_BezierCurve3D.hpp</div>  </div>
</div><!--header-->
<div class="contents">
<a href="_n_r_e___bezier_curve3_d_8hpp.php">Go to the documentation of this file.</a><div class="fragment"><div class="line"><a name="l00001"></a><span class="lineno">    1</span>&#160;</div><div class="line"><a name="l00010"></a><span class="lineno">   10</span>&#160;<span class="preprocessor">     #pragma once</span></div><div class="line"><a name="l00011"></a><span class="lineno">   11</span>&#160;</div><div class="line"><a name="l00012"></a><span class="lineno">   12</span>&#160;<span class="preprocessor">     #include &lt;Utility/Vector/NRE_Vector.hpp&gt;</span></div><div class="line"><a name="l00013"></a><span class="lineno">   13</span>&#160;<span class="preprocessor">     #include &lt;Utility/Interfaces/Stringable/NRE_Stringable.hpp&gt;</span></div><div class="line"><a name="l00014"></a><span class="lineno">   14</span>&#160;<span class="preprocessor">     #include &quot;../../../Vector/3D/NRE_Vector3D.hpp&quot;</span></div><div class="line"><a name="l00015"></a><span class="lineno">   15</span>&#160;</div><div class="line"><a name="l00016"></a><span class="lineno">   16</span>&#160;</div><div class="line"><a name="l00021"></a><span class="lineno">   21</span>&#160;    <span class="keyword">namespace </span><a class="code" href="namespace_n_r_e.php">NRE</a> {</div><div class="line"><a name="l00026"></a><span class="lineno">   26</span>&#160;        <span class="keyword">namespace </span><a class="code" href="namespace_math.php">Math</a> {</div><div class="line"><a name="l00027"></a><span class="lineno">   27</span>&#160;</div><div class="line"><a name="l00032"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">   32</a></span>&#160;            <span class="keyword">class </span><a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a> : <span class="keyword">public</span> Utility::Stringable&lt;BezierCurve3D&gt; {</div><div class="line"><a name="l00033"></a><span class="lineno">   33</span>&#160;                <span class="keyword">private</span>:    <span class="comment">//Fields</span></div><div class="line"><a name="l00034"></a><span class="lineno">   34</span>&#160;                    Utility::Vector&lt;Point3D&lt;float&gt;&gt; controls;   </div><div class="line"><a name="l00036"></a><span class="lineno">   36</span>&#160;                <span class="keyword">public</span>:    <span class="comment">// Methods</span></div><div class="line"><a name="l00037"></a><span class="lineno">   37</span>&#160;                    <span class="comment">//## Constructor ##//</span></div><div class="line"><a name="l00041"></a><span class="lineno">   41</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#ae9834d919c43211705a9ab9fd10dea1d">BezierCurve3D</a>() = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00046"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a86e23312e33c11a5dd96fa23ef5faeeb">   46</a></span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a86e23312e33c11a5dd96fa23ef5faeeb">BezierCurve3D</a>(std::initializer_list&lt;<a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Point3D&lt;float&gt;</a>&gt; points) : controls(points) {</div><div class="line"><a name="l00047"></a><span class="lineno">   47</span>&#160;                        }</div><div class="line"><a name="l00052"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a862ab044f5cac6e196a5e8b492727e23">   52</a></span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a862ab044f5cac6e196a5e8b492727e23">BezierCurve3D</a>(Utility::Vector&lt;<a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Point3D&lt;float&gt;</a>&gt; &amp;&amp; c) : controls(<a class="code" href="namespacestd.php">std</a>::move(c)) {</div><div class="line"><a name="l00053"></a><span class="lineno">   53</span>&#160;                        }</div><div class="line"><a name="l00054"></a><span class="lineno">   54</span>&#160;</div><div class="line"><a name="l00055"></a><span class="lineno">   55</span>&#160;                    <span class="comment">//## Copy-Constructor ##//</span></div><div class="line"><a name="l00060"></a><span class="lineno">   60</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#ae9834d919c43211705a9ab9fd10dea1d">BezierCurve3D</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a> <span class="keyword">const</span>&amp; c) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00061"></a><span class="lineno">   61</span>&#160;</div><div class="line"><a name="l00062"></a><span class="lineno">   62</span>&#160;                    <span class="comment">//## Move-Constructor ##//</span></div><div class="line"><a name="l00067"></a><span class="lineno">   67</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#ae9834d919c43211705a9ab9fd10dea1d">BezierCurve3D</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a> &amp;&amp; c) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00068"></a><span class="lineno">   68</span>&#160;</div><div class="line"><a name="l00069"></a><span class="lineno">   69</span>&#160;                    <span class="comment">//## Deconstructor ##//</span></div><div class="line"><a name="l00073"></a><span class="lineno">   73</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#aad296197dfdc4bfc860d3a2c332def39">~BezierCurve3D</a>() = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00074"></a><span class="lineno">   74</span>&#160;</div><div class="line"><a name="l00075"></a><span class="lineno">   75</span>&#160;                    <span class="comment">//## Getter ##//</span></div><div class="line"><a name="l00081"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#ad76aba00eb1f424e1776737edaab4f69">   81</a></span>&#160;<span class="comment"></span>                        <span class="keyword">inline</span> <a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Point3D&lt;float&gt;</a> <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#ad76aba00eb1f424e1776737edaab4f69">getPoint</a>(std::size_t index)<span class="keyword"> const </span>{</div><div class="line"><a name="l00082"></a><span class="lineno">   82</span>&#160;                            <span class="keywordflow">return</span> controls[index];</div><div class="line"><a name="l00083"></a><span class="lineno">   83</span>&#160;                        }</div><div class="line"><a name="l00088"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a6a979821dcf6d858a1e4d751f7a42896">   88</a></span>&#160;                        <span class="keyword">inline</span> std::size_t <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a6a979821dcf6d858a1e4d751f7a42896">getSize</a>()<span class="keyword"> const </span>{</div><div class="line"><a name="l00089"></a><span class="lineno">   89</span>&#160;                            <span class="keywordflow">return</span> controls.getSize();</div><div class="line"><a name="l00090"></a><span class="lineno">   90</span>&#160;                        }</div><div class="line"><a name="l00091"></a><span class="lineno">   91</span>&#160;</div><div class="line"><a name="l00092"></a><span class="lineno">   92</span>&#160;                    <span class="comment">//## Access Operator ##//</span></div><div class="line"><a name="l00099"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a74a49c78163f2125ea4aa6cd73a87f30">   99</a></span>&#160;<span class="comment"></span>                        <span class="keyword">inline</span> <a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Point3D&lt;float&gt;</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a74a49c78163f2125ea4aa6cd73a87f30">operator []</a>(std::size_t index) {</div><div class="line"><a name="l00100"></a><span class="lineno">  100</span>&#160;                            <span class="keywordflow">return</span> controls[index];</div><div class="line"><a name="l00101"></a><span class="lineno">  101</span>&#160;                        }</div><div class="line"><a name="l00108"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#af63579edd5673e1bc4510466bddb78f4">  108</a></span>&#160;                         <span class="keyword">inline</span> <a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Point3D&lt;float&gt;</a> <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a74a49c78163f2125ea4aa6cd73a87f30">operator []</a>(std::size_t index)<span class="keyword"> const</span>{</div><div class="line"><a name="l00109"></a><span class="lineno">  109</span>&#160;                             <span class="keywordflow">return</span> controls[index];</div><div class="line"><a name="l00110"></a><span class="lineno">  110</span>&#160;                         }</div><div class="line"><a name="l00111"></a><span class="lineno">  111</span>&#160;</div><div class="line"><a name="l00112"></a><span class="lineno">  112</span>&#160;                    <span class="comment">//## Assignment Operator ##//</span></div><div class="line"><a name="l00118"></a><span class="lineno">  118</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a4dac44314e1e432b221b1b3b11b2d825">operator =</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a> <span class="keyword">const</span>&amp; c) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00124"></a><span class="lineno">  124</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a4dac44314e1e432b221b1b3b11b2d825">operator =</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">BezierCurve3D</a> &amp;&amp; c) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00125"></a><span class="lineno">  125</span>&#160;</div><div class="line"><a name="l00126"></a><span class="lineno">  126</span>&#160;                    <span class="comment">//## Stream Operator ##//</span></div><div class="line"><a name="l00131"></a><span class="lineno">  131</span>&#160;<span class="comment"></span>                        Utility::String <a class="code" href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#ae707b6eac71ceb1fa34717872a5be09a">toString</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00132"></a><span class="lineno">  132</span>&#160;            };</div><div class="line"><a name="l00133"></a><span class="lineno">  133</span>&#160;        }</div><div class="line"><a name="l00134"></a><span class="lineno">  134</span>&#160;    }</div><div class="line"><a name="l00135"></a><span class="lineno">  135</span>&#160;</div><div class="line"><a name="l00136"></a><span class="lineno">  136</span>&#160;<span class="preprocessor">    #include &quot;NRE_BezierCurve3D.tpp&quot;</span></div><div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve3_d_php"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php">NRE::Math::BezierCurve3D</a></div><div class="ttdoc">Represent a 2D homogeneous Bezier curves with a set of control points. </div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve3D.hpp:32</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve3_d_php_a74a49c78163f2125ea4aa6cd73a87f30"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a74a49c78163f2125ea4aa6cd73a87f30">NRE::Math::BezierCurve3D::operator[]</a></div><div class="ttdeci">Point3D&lt; float &gt; &amp; operator[](std::size_t index)</div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve3D.hpp:99</div></div>
<div class="ttc" id="namespace_math_php"><div class="ttname"><a href="namespace_math.php">Math</a></div><div class="ttdoc">Math&amp;#39;s API. </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve3_d_php_ae9834d919c43211705a9ab9fd10dea1d"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#ae9834d919c43211705a9ab9fd10dea1d">NRE::Math::BezierCurve3D::BezierCurve3D</a></div><div class="ttdeci">BezierCurve3D()=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve3_d_php_a4dac44314e1e432b221b1b3b11b2d825"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a4dac44314e1e432b221b1b3b11b2d825">NRE::Math::BezierCurve3D::operator=</a></div><div class="ttdeci">BezierCurve3D &amp; operator=(BezierCurve3D const &amp;c)=default</div></div>
<div class="ttc" id="namespacestd_php"><div class="ttname"><a href="namespacestd.php">std</a></div><div class="ttdoc">The stl standard namespace. </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_vector3_d_php"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_vector3_d.php">NRE::Math::Vector3D</a></div><div class="ttdoc">A cartesian 3D vector, 2D homogeneous. </div><div class="ttdef"><b>Definition:</b> NRE_Matrix3x3.hpp:33</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve3_d_php_aad296197dfdc4bfc860d3a2c332def39"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#aad296197dfdc4bfc860d3a2c332def39">NRE::Math::BezierCurve3D::~BezierCurve3D</a></div><div class="ttdeci">~BezierCurve3D()=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve3_d_php_a6a979821dcf6d858a1e4d751f7a42896"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a6a979821dcf6d858a1e4d751f7a42896">NRE::Math::BezierCurve3D::getSize</a></div><div class="ttdeci">std::size_t getSize() const </div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve3D.hpp:88</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve3_d_php_ae707b6eac71ceb1fa34717872a5be09a"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#ae707b6eac71ceb1fa34717872a5be09a">NRE::Math::BezierCurve3D::toString</a></div><div class="ttdeci">Utility::String toString() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve3_d_php_ad76aba00eb1f424e1776737edaab4f69"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#ad76aba00eb1f424e1776737edaab4f69">NRE::Math::BezierCurve3D::getPoint</a></div><div class="ttdeci">Point3D&lt; float &gt; const &amp; getPoint(std::size_t index) const </div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve3D.hpp:81</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve3_d_php_a862ab044f5cac6e196a5e8b492727e23"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a862ab044f5cac6e196a5e8b492727e23">NRE::Math::BezierCurve3D::BezierCurve3D</a></div><div class="ttdeci">BezierCurve3D(Utility::Vector&lt; Point3D&lt; float &gt;&gt; &amp;&amp;c)</div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve3D.hpp:52</div></div>
<div class="ttc" id="namespace_n_r_e_php"><div class="ttname"><a href="namespace_n_r_e.php">NRE</a></div><div class="ttdoc">The NearlyRealEngine&amp;#39;s global namespace. </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_bezier_curve3_d_php_a86e23312e33c11a5dd96fa23ef5faeeb"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_bezier_curve3_d.php#a86e23312e33c11a5dd96fa23ef5faeeb">NRE::Math::BezierCurve3D::BezierCurve3D</a></div><div class="ttdeci">BezierCurve3D(std::initializer_list&lt; Point3D&lt; float &gt;&gt; points)</div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve3D.hpp:46</div></div>
</div><!-- fragment --></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
