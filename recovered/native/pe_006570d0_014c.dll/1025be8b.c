/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025be8b */

int * __thiscall FUN_1025be8b(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  
  *(undefined1 *)(param_1 + 3) = 0;
  piVar1 = param_1 + 1;
  if (param_2 == (int *)0x0) {
    puVar3 = PTR_PTR_1039b4c0;
    puVar5 = PTR_DAT_1039b4c4;
    if (DAT_103a5004 != 0) {
      iVar4 = FUN_102743cd();
      *param_1 = iVar4;
      *piVar1 = *(int *)(iVar4 + 0x4c);
      param_1[2] = *(int *)(iVar4 + 0x48);
      ___acrt_update_locale_info(iVar4,piVar1);
      FUN_1027494a(*param_1,param_1 + 2);
      uVar2 = *(uint *)(*param_1 + 0x350);
      if ((uVar2 & 2) != 0) {
        return param_1;
      }
      *(uint *)(*param_1 + 0x350) = uVar2 | 2;
      *(undefined1 *)(param_1 + 3) = 1;
      return param_1;
    }
  }
  else {
    puVar3 = (undefined *)*param_2;
    puVar5 = (undefined *)param_2[1];
  }
  *piVar1 = (int)puVar3;
  param_1[2] = (int)puVar5;
  return param_1;
}

