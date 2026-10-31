/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e8942 */

void __thiscall FUN_100e8942(int *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ead60;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (0x5555555 < *param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  iVar5 = param_1[1];
  iVar1 = *param_1;
  local_20 = (undefined1 *)&local_38;
  iVar3 = FUN_10001426(*param_2 * 0x30);
  uVar4 = *param_2;
  local_2c = (iVar5 - iVar1 >> 4) * -0x55555555;
  iVar5 = *param_1;
  iVar1 = param_1[1];
  local_14 = 0xffffffff;
  local_38 = param_1;
  local_34 = iVar3;
  local_30 = uVar4;
  piVar2 = param_1;
  local_24 = iVar3;
  if (iVar5 != iVar1) {
    do {
      local_28 = piVar2;
      FUN_100aa917(iVar3,iVar5);
      iVar3 = iVar3 + 0x30;
      iVar5 = iVar5 + 0x30;
      piVar2 = local_28;
    } while (iVar5 != iVar1);
    uVar4 = *param_2;
  }
  local_14 = 0xffffffff;
  local_34 = 0;
  FUN_100aa77e(local_24,local_2c,uVar4);
  FUN_100e8a3e();
  ExceptionList = local_1c;
  return;
}

