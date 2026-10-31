/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004e395 */

int FUN_14004e395(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  local_2c = 0;
  iVar6 = 6;
  if (*(char *)(param_1 + 0x400) == '\0') {
    if (lVar1 == 0) {
      iVar6 = 0;
    }
    else {
      puVar7 = *(undefined8 **)(lVar1 + 0x10e8);
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)FUN_14001e961(*(longlong *)(param_1 + 0x98),0x38,&local_2c);
        iVar6 = local_2c;
        if (local_2c != 0) goto LAB_14004e427;
        uVar8 = FUN_14004e23d(lVar1,*(uint *)(lVar1 + 0x5e0));
        *puVar7 = uVar8;
        uVar8 = FUN_14004e23d(lVar1,*(uint *)(lVar1 + 0x5e4));
        puVar7[1] = uVar8;
        uVar8 = FUN_14004e23d(lVar1,*(uint *)(lVar1 + 0x5ec));
        puVar7[2] = uVar8;
        uVar8 = FUN_14004e23d(lVar1,*(uint *)(lVar1 + 0x5f0));
        puVar7[3] = uVar8;
        uVar8 = FUN_14004e23d(lVar1,*(uint *)(lVar1 + 0x5f4));
        puVar7[4] = uVar8;
        *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(lVar1 + 0x5fc);
        *(undefined1 *)((longlong)puVar7 + 0x2c) = *(undefined1 *)(lVar1 + 0x5f8);
        *(undefined2 *)((longlong)puVar7 + 0x2e) = *(undefined2 *)(lVar1 + 0x600);
        *(undefined2 *)(puVar7 + 6) = *(undefined2 *)(lVar1 + 0x602);
        *(undefined8 **)(lVar1 + 0x10e8) = puVar7;
      }
      param_2[6] = puVar7[6];
      uVar8 = *puVar7;
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      uVar5 = puVar7[5];
      param_2[4] = puVar7[4];
      param_2[5] = uVar5;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      *param_2 = uVar8;
      param_2[1] = uVar2;
      iVar6 = local_2c;
    }
  }
LAB_14004e427:
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

