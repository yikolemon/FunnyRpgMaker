/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ceca9 */

void FUN_1400ceca9(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  float fVar2;
  undefined1 auStack_48 [44];
  short local_1c [2];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  FUN_140076955(local_1c,(longlong)param_3 + (longlong)param_2 + param_1[4],
                (longlong)(int)param_1[3] + param_1[4]);
  fVar2 = DAT_1401c86a4;
  if (local_1c[0] != 10) {
    lVar1 = *param_1;
    fVar2 = (float)FUN_1400e61ce(*(undefined8 *)(lVar1 + 0x1318));
    fVar2 = fVar2 * *(float *)(lVar1 + 0x1328);
  }
  if (DAT_140f17b40 != (local_18 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(fVar2);
  }
  return;
}

