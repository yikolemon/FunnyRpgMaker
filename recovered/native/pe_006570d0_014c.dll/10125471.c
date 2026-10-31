/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10125471 */

void FUN_10125471(int param_1,uint *param_2)

{
  undefined2 *puVar1;
  
  FUN_1012d08c("Codepoint: U+%04X",*param_2 >> 6);
  FUN_10132188();
  FUN_1012d08c("Visible: %d",*param_2 >> 1 & 1);
  FUN_1012d08c();
  FUN_1012d08c("Pos: (%.2f,%.2f)->(%.2f,%.2f)",(double)(float)param_2[2],(double)(float)param_2[3],
               (double)(float)param_2[4],(double)(float)param_2[5]);
  FUN_1012d08c("UV: (%.3f,%.3f)->(%.3f,%.3f)",(double)(float)param_2[6],(double)(float)param_2[7],
               (double)(float)param_2[8],(double)(float)param_2[9]);
  if (-1 < (int)param_2[10]) {
    puVar1 = (undefined2 *)FUN_10190112(*(undefined4 *)(param_1 + 4),param_2[10]);
    FUN_1012d08c("PackId: 0x%X (%dx%d rect at %d,%d)",param_2[10],puVar1[2],puVar1[3],*puVar1,
                 puVar1[1]);
  }
  FUN_1012d08c("SourceIdx: %d",*param_2 >> 2 & 0xf);
  return;
}

