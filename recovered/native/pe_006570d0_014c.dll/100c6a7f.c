/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c6a7f */

int * thunk_FUN_1007f2cb(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  bool bVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [4];
  char cStack_34;
  int iStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = auStack_38;
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_100c3000;
  iStack_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uVar2 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20);
  iStack_30 = uVar2 - param_3;
  if (uVar2 < param_3) {
    iStack_30 = 0;
  }
  iStack_24 = 0;
  if ((int)(uint)(uVar2 == 0) <= *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x24)) {
    iStack_24 = iStack_30;
  }
  FUN_1007a540(param_1);
  uVar2 = 4;
  if (cStack_34 == '\x01') {
    iVar1 = *(int *)(*param_1 + 4);
    if ((iStack_24 != 0) && ((*(uint *)((int)param_1 + iVar1 + 0x14) & 0x1c0) != 0x40)) {
      do {
        uStack_28 = 0;
        uStack_14 = 1;
        iVar1 = FUN_1007a612((int)*(char *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
        if (iVar1 == -1) {
          uStack_2c = 4;
          iStack_24 = iStack_30;
          goto code_r0x1007f3ea;
        }
        iStack_30 = iStack_30 + -1;
      } while (iStack_30 != 0);
      iVar1 = *(int *)(*param_1 + 4);
      iStack_24 = 0;
    }
    uStack_28 = 0;
    uStack_14 = 1;
    uStack_2c = 0;
    uVar4 = (**(code **)(**(int **)((int)param_1 + iVar1 + 0x38) + 0x24))(param_2,param_3,0);
    uVar2 = 4;
    if ((uint)uVar4 == param_3 && (int)((ulonglong)uVar4 >> 0x20) == 0) {
code_r0x1007f3ea:
      do {
        bVar3 = iStack_24 == 0;
        iStack_24 = iStack_24 + -1;
        uVar2 = uStack_2c;
        if (bVar3) goto code_r0x1007f41e;
        uStack_28 = uStack_2c;
        iVar1 = FUN_1007a612((int)*(char *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
      } while (iVar1 != -1);
      uVar2 = 4;
    }
code_r0x1007f41e:
    iVar1 = *(int *)(*param_1 + 4);
    *(undefined4 *)((int)param_1 + iVar1 + 0x24) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x20) = 0;
  }
  uStack_14 = 0;
  FUN_10073a60((uint)(*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) << 2 |
               uVar2 | *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc),0);
  uStack_14 = 0xffffffff;
  FUN_1007a64a();
  *unaff_FS_OFFSET = iStack_1c;
  return param_1;
}

