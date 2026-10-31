/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006a667 */

undefined8 * FUN_18006a667(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  int local_38 [2];
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_180002218();
  local_28 = param_1;
  FUN_180002d74(param_1);
  FUN_180004aa4(local_28,0x105,0);
  puVar1 = local_28;
  puVar3 = local_28;
  if (7 < (ulonglong)local_28[3]) {
    puVar3 = (undefined8 *)*local_28;
  }
  uVar2 = FUN_18023a800(puVar3);
  FUN_180004aa4(puVar1,uVar2 & 0xffffffff,0);
  iVar4 = (int)(uVar2 >> 0x20);
  if (iVar4 == -1) {
    iVar4 = 0x14;
    local_30 = FUN_1800024a1();
  }
  else {
    local_30 = FUN_180002218();
  }
  if (iVar4 == 0) {
    return local_28;
  }
  local_38[0] = iVar4;
                    /* WARNING: Subroutine does not return */
  FUN_18000219a("temp_directory_path",local_38,local_28);
}

