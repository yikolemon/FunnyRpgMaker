/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140082410 */

void FUN_140082410(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)param_1[2];
  lVar2 = param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1400823db(puVar1);
    FUN_14001c53d(lVar2,(longlong)puVar1);
    param_1[2] = 0;
  }
  if (param_1[4] == 0) {
    FUN_14001c53d(lVar2,*param_1);
    *param_1 = 0;
  }
  return;
}

