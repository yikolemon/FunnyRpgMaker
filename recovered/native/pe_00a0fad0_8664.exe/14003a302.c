/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003a302 */

uint * FUN_14003a302(uint *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  uint *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0xf;
  param_1[7] = 0;
  local_50 = 0;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_20 = param_1;
  iVar2 = FUN_140113aa4(&local_28,&local_50,param_2);
  if (local_28 != 0 && iVar2 == 0) {
    FUN_14000169c(&local_48);
    puVar1 = local_20;
    if (local_20 != &local_48) {
      FUN_1400065bc(local_20);
      *(undefined8 *)(puVar1 + 4) = local_38;
      *(undefined8 *)(puVar1 + 6) = uStack_30;
      *puVar1 = local_48;
      puVar1[1] = uStack_44;
      puVar1[2] = uStack_40;
      puVar1[3] = uStack_3c;
      local_38 = 0;
      uStack_30 = 0xf;
      local_48 = local_48 & 0xffffff00;
    }
    FUN_1400017de(&local_48);
    thunk_FUN_1401212e0(local_28);
  }
  return local_20;
}

