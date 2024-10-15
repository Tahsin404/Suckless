const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#130d25", /* black   */
  [1] = "#6659BA", /* red     */
  [2] = "#7038CA", /* green   */
  [3] = "#6766C7", /* yellow  */
  [4] = "#9B54B5", /* blue    */
  [5] = "#9B66D4", /* magenta */
  [6] = "#D569DE", /* cyan    */
  [7] = "#dbc3dc", /* white   */

  /* 8 bright colors */
  [8]  = "#99889a",  /* black   */
  [9]  = "#6659BA",  /* red     */
  [10] = "#7038CA", /* green   */
  [11] = "#6766C7", /* yellow  */
  [12] = "#9B54B5", /* blue    */
  [13] = "#9B66D4", /* magenta */
  [14] = "#D569DE", /* cyan    */
  [15] = "#dbc3dc", /* white   */

  /* special colors */
  [256] = "#130d25", /* background */
  [257] = "#dbc3dc", /* foreground */
  [258] = "#dbc3dc",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
