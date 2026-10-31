/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14026c4cb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14026c4cb(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 ***pppuVar3;
  undefined8 **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
  }
  else if (DAT_140628ee0 < 0x30000) {
    iVar1 = (*ram0x00014059e0f8)(DAT_140629fd0,0,param_2,0xffffffff,0,0);
    if (iVar1 < 1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
    }
    else {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = (undefined8 ***)0x0;
      uStack_50 = 0;
      FUN_140216c34(&local_58,0,iVar1);
      pppuVar3 = &local_58;
      if (7 < uStack_40) {
        pppuVar3 = (undefined8 ***)local_58;
      }
      (*ram0x00014059e0f8)(DAT_140629fd0,0,param_2,0xffffffff,pppuVar3,iVar1);
      pppuVar3 = (undefined8 ***)local_58;
      if (uStack_40 < 8) {
        pppuVar3 = &local_58;
      }
      iVar1 = (*(code *)s_LoadLibraryW_14059e282._6_8_)(0xfde9,0,pppuVar3,0xffffffff,0,0,0,0);
      local_38 = param_1;
      if (iVar1 < 1) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0xf;
      }
      else {
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        FUN_140273118(param_1,0,iVar1 + -1);
        puVar2 = local_38;
        if (0xf < (ulonglong)local_38[3]) {
          puVar2 = (undefined8 *)*local_38;
        }
        pppuVar3 = (undefined8 ***)local_58;
        if (uStack_40 < 8) {
          pppuVar3 = &local_58;
        }
        (*(code *)s_LoadLibraryW_14059e282._6_8_)(0xfde9,0,pppuVar3,0xffffffff,puVar2,iVar1,0,0);
      }
      param_1 = local_38;
      FUN_1402125bc(&local_58);
    }
  }
  else {
    FUN_140213362(param_1,param_2);
  }
  return param_1;
}

