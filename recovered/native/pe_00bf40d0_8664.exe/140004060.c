/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140004060 */

undefined8 * FUN_140004060(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < param_2) {
    param_1 = FUN_1400040c4(param_1,param_2,param_3,param_2,(byte)param_3);
  }
  else {
    param_1[2] = lVar1 + param_2;
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    FUN_1400b3c00((undefined1 (*) [32])(lVar1 + (longlong)puVar2),(byte)param_3,param_2);
    *(undefined1 *)((longlong)puVar2 + lVar1 + param_2) = 0;
  }
  return param_1;
}

