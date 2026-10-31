/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004e9e6 */

ulonglong FUN_14004e9e6(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 auStackY_c8 [32];
  undefined8 local_88 [9];
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_c8;
  plVar1 = (longlong *)param_1[1];
  *(undefined8 **)(param_2 + 0x238) = param_1;
  *(undefined1 *)(param_2 + 0x231) = 0;
  uVar5 = 0;
  if ((*(int *)(param_2 + 0x70) == 0) || (*(int *)(param_2 + 0x74) == 0)) goto LAB_14004eb22;
  FUN_1400b3c00((undefined1 (*) [32])(param_2 + 0xb8),0,0x170);
  *(undefined4 *)(param_2 + 0x184) = 1;
  *(undefined4 *)(param_2 + 0x204) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x20c) = 0xf5c;
  *(undefined8 *)(param_2 + 0x17c) = 0x70027a000;
  *(longlong *)(param_2 + 0x228) = param_2;
  *(undefined4 *)(param_2 + 0x260) = param_3;
  *(undefined8 *)(param_2 + 0x268) = param_4;
  if (*(char *)((longlong)param_1 + 0x2c) == '\0') {
    uVar2 = 0x61;
    uVar6 = 0x2000;
  }
  else {
    uVar2 = *(int *)((longlong)param_1 + 0x694) + 1;
    uVar6 = 0x5000;
  }
  iVar3 = FUN_14004ef09(local_88,uVar6,(undefined1 (*) [32])(param_2 + 0xb8),(longlong *)*param_1,
                        uVar2,*(undefined2 *)(param_2 + 0xac),*(undefined2 *)(param_2 + 0xae));
  uVar5 = 0;
  if (iVar3 == 0) {
    uVar4 = FUN_140020a41((longlong)plVar1,*(int *)(param_2 + 0x70) + *(int *)(param_1 + 3));
    uVar2 = (uint)uVar4;
    if (uVar2 == 0) {
      uVar2 = FUN_140021063(plVar1,*(uint *)(param_2 + 0x74));
      if (uVar2 == 0) {
        uVar5 = FUN_14004efc4((longlong)local_88,(byte *)plVar1[7],(byte *)plVar1[8]);
        FUN_140021187(plVar1);
        if ((int)uVar5 != 0) {
          uVar5 = uVar5 & 0xffffffff;
          goto LAB_14004eb10;
        }
        *(byte *)(param_2 + 0xb8) = *(byte *)(param_2 + 0xb8) & 0xfe;
        iVar3 = *(int *)(param_2 + 0x210);
        if (iVar3 < 0) {
          iVar3 = -iVar3;
LAB_14004eb91:
          *(int *)(param_2 + 0x210) = iVar3;
        }
        else if (iVar3 == 0) {
          iVar3 = 0x3ade68b1;
          goto LAB_14004eb91;
        }
        if (1000 < *(uint *)(param_2 + 0x180)) {
          *(undefined4 *)(param_2 + 0x180) = 7;
        }
        uVar5 = 0;
        if (1000 < *(uint *)(param_2 + 0x184)) {
          *(undefined4 *)(param_2 + 0x184) = 1;
        }
        goto LAB_14004eb10;
      }
    }
    uVar5 = (ulonglong)uVar2;
  }
LAB_14004eb10:
  FUN_14004f289(param_2);
  FUN_14004f2a2(local_88);
LAB_14004eb22:
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStackY_c8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStackY_c8);
}

