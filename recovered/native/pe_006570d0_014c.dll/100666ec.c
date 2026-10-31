/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100666ec */

undefined4 * __thiscall FUN_100666ec(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *local_4c;
  undefined4 *local_48;
  uint local_44;
  undefined4 *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c21e0;
  local_1c = ExceptionList;
  iVar6 = *param_1;
  local_38 = (param_1[1] - iVar6 >> 2) * -0x49249249 + 1;
  uVar4 = (param_1[2] - iVar6 >> 2) * -0x49249249;
  uVar5 = 0x9249249 - (uVar4 >> 1);
  uVar7 = (uVar4 >> 1) + uVar4;
  if (uVar7 <= local_38) {
    uVar7 = local_38;
  }
  if (uVar5 <= uVar4 && uVar4 - uVar5 != 0) {
    uVar7 = 0x9249249;
  }
  ExceptionList = &local_1c;
  local_24 = param_1;
  if (0x9249249 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  local_20 = (undefined1 *)&local_4c;
  puVar2 = (undefined4 *)FUN_10001426(uVar7 * 0x1c);
  local_3c = (int)puVar2 + (param_2 - iVar6) + 0x1c;
  local_4c = local_24;
  local_40 = (undefined4 *)((param_2 - iVar6) + (int)puVar2);
  *(undefined8 *)(local_40 + 4) = 0;
  *local_40 = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[6] = 3;
  local_14 = 0xffffffff;
  iVar6 = *local_24;
  iVar3 = local_24[1];
  local_30 = local_3c;
  local_2c = local_40;
  local_48 = puVar2;
  local_28 = puVar2;
  local_44 = uVar7;
  local_34 = uVar7;
  if (param_2 == iVar3) {
    for (; iVar6 != param_2; iVar6 = iVar6 + 0x1c) {
      FUN_100668c4(puVar2,iVar6);
      puVar2 = puVar2 + 7;
    }
  }
  else {
    iVar1 = local_3c;
    if (iVar6 != param_2) {
      do {
        FUN_100668c4(puVar2,iVar6);
        puVar2 = puVar2 + 7;
        iVar6 = iVar6 + 0x1c;
      } while (iVar6 != param_2);
      iVar3 = local_24[1];
      iVar1 = local_30;
      puVar2 = local_28;
    }
    for (; local_40 = puVar2, param_2 != iVar3; param_2 = param_2 + 0x1c) {
      FUN_100668c4(iVar1,param_2);
      iVar1 = iVar1 + 0x1c;
      puVar2 = local_40;
    }
  }
  local_48 = (undefined4 *)0x0;
  FUN_100638d4(local_28,local_38,local_34);
  puVar2 = local_2c;
  local_14 = 0xffffffff;
  FUN_10063950();
  ExceptionList = local_1c;
  return puVar2;
}

