const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a0b0d", /* black   */
  [1] = "#62524F", /* red     */
  [2] = "#96533C", /* green   */
  [3] = "#976E5E", /* yellow  */
  [4] = "#B58A74", /* blue    */
  [5] = "#7A8088", /* magenta */
  [6] = "#BEA99F", /* cyan    */
  [7] = "#decfc5", /* white   */

  /* 8 bright colors */
  [8]  = "#9b9089",  /* black   */
  [9]  = "#62524F",  /* red     */
  [10] = "#96533C", /* green   */
  [11] = "#976E5E", /* yellow  */
  [12] = "#B58A74", /* blue    */
  [13] = "#7A8088", /* magenta */
  [14] = "#BEA99F", /* cyan    */
  [15] = "#decfc5", /* white   */

  /* special colors */
  [256] = "#0a0b0d", /* background */
  [257] = "#decfc5", /* foreground */
  [258] = "#decfc5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
