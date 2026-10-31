/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e93bc */

void __thiscall FUN_100e93bc(int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100eade0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*param_2 < 0xaaaaaab) {
    iVar10 = param_1[1];
    iVar3 = *param_1;
    local_20 = (undefined1 *)&local_30;
    iVar9 = FUN_10001426(*param_2 * 0x18);
    local_28 = *param_2;
    local_24 = (iVar10 - iVar3 >> 3) * -0x55555555;
    puVar4 = (undefined4 *)*param_1;
    puVar5 = (undefined4 *)param_1[1];
    uVar11 = local_28;
    if (puVar4 != puVar5) {
      iVar10 = 0;
      do {
        *(undefined8 *)(iVar9 + 0x10 + iVar10) = 0;
        puVar1 = (undefined4 *)(iVar9 + iVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = (undefined4 *)((int)puVar4 + iVar10);
        *(undefined8 *)(iVar9 + 0x10 + iVar10) = *(undefined8 *)(puVar1 + 4);
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar2 = (undefined4 *)(iVar9 + iVar10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        puVar1[4] = 0;
        puVar1[5] = 0xf;
        *(undefined1 *)puVar1 = 0;
        iVar10 = iVar10 + 0x18;
      } while (puVar1 + 6 != puVar5);
      uVar11 = *param_2;
    }
    local_14 = 0xffffffff;
    local_2c = 0;
    local_30 = param_1;
    FUN_100ab1a2(iVar9,local_24,uVar11);
    FUN_100e94d8();
    ExceptionList = local_1c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

