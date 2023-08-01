<div>
    <div>
        <h3>Concepts</h3>
    </div>
    <div>
        <p><em>For this project, we expect you to look at this concept:</em></p>
        <ul>
            <li><a href="https://intranet.hbtn.io/concepts/889">Data Structures</a></li>
        </ul>
    </div>
</div>
<div>
    <div>
        <p><img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/229/giphy-3.gif" alt=""></p>
        <h2>Resources</h2>
        <p><strong>Read or watch</strong>:</p>
        <ul>
            <li><a href="https://intranet.hbtn.io/rltoken/cg9u72K8oC40BifREzmx0g" title="Linked Lists" target="_blank">Linked Lists</a></li>
            <li><a href="https://intranet.hbtn.io/rltoken/cOmrDflypepm1-sgGIXjNA" title="Google" target="_blank">Google</a></li>
            <li><a href="https://intranet.hbtn.io/rltoken/6CP1oqEpl5hd1j18fusEEQ" title="Youtube" target="_blank">Youtube</a></li>
        </ul>
        <h2>Learning Objectives</h2>
        <p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/QoooFrklQh-pD3PEjxV8cA" title="explain to anyone" target="_blank">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
        <h3>General</h3>
        <ul>
            <li>When and why using linked lists vs arrays</li>
            <li>How to build and use linked lists</li>
        </ul>
        <h2>Requirements</h2>
        <h3>General</h3>
        <ul>
            <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
            <li>All your files will be compiled on Ubuntu 20.04 LTS using&nbsp;<code>gcc</code>, using the options&nbsp;<code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
            <li>All your files should end with a new line</li>
            <li>A&nbsp;<code>README.md</code> file, at the root of the folder of the project is mandatory</li>
            <li>Your code should use the&nbsp;<code>Betty</code> style. It will be checked using&nbsp;<a href="https://github.com/hs-hq/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and&nbsp;<a href="https://github.com/hs-hq/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
            <li>You are not allowed to use global variables</li>
            <li>No more than 5 functions per file</li>
            <li>The only C standard library functions allowed are&nbsp;<code>malloc</code>,&nbsp;<code>free</code> and&nbsp;<code>exit</code>. Any use of functions like&nbsp;<code>printf</code>,&nbsp;<code>puts</code>,&nbsp;<code>calloc</code>,&nbsp;<code>realloc</code> etc&hellip; is forbidden</li>
            <li>You are allowed to use&nbsp;<a href="https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
            <li>You don&rsquo;t have to push&nbsp;<code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
            <li>In the following examples, the&nbsp;<code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own&nbsp;<code>main.c</code> files at compilation. Our&nbsp;<code>main.c</code> files might be different from the one shown in the examples</li>
            <li>The prototypes of all your functions and the prototype of the function&nbsp;<code>_putchar</code> should be included in your header file called&nbsp;<code>lists.h</code></li>
            <li>Don&rsquo;t forget to push your header file</li>
            <li>All your header files should be include guarded</li>
        </ul>
        <h2>More Info</h2>
        <p>Please use this data structure for this project:</p>
        <pre><code>/**
 * struct list_s - singly linked list
 * @str: string - (malloc&apos;ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;</code></pre>
    </div>
</div>
