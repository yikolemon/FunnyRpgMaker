/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180200d59 */

int FUN_180200d59(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  local_2c = 0;
  iVar8 = 6;
  if (*(char *)(param_1 + 0x400) == '\0') {
    if (lVar1 == 0) {
      iVar8 = 0;
    }
    else {
      puVar9 = *(undefined8 **)(lVar1 + 0x10e8);
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)FUN_1801cc006(*(undefined8 *)(param_1 + 0x98),0x38,&local_2c);
        iVar8 = local_2c;
        if (local_2c != 0) goto LAB_180200deb;
        uVar10 = FUN_180200c01(lVar1,*(undefined4 *)(lVar1 + 0x5e0));
        *puVar9 = uVar10;
        uVar10 = FUN_180200c01(lVar1,*(undefined4 *)(lVar1 + 0x5e4));
        puVar9[1] = uVar10;
        uVar10 = FUN_180200c01(lVar1,*(undefined4 *)(lVar1 + 0x5ec));
        puVar9[2] = uVar10;
        uVar10 = FUN_180200c01(lVar1,*(undefined4 *)(lVar1 + 0x5f0));
        puVar9[3] = uVar10;
        uVar10 = FUN_180200c01(lVar1,*(undefined4 *)(lVar1 + 0x5f4));
        puVar9[4] = uVar10;
        *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(lVar1 + 0x5fc);
        *(undefined1 *)((longlong)puVar9 + 0x2c) = *(undefined1 *)(lVar1 + 0x5f8);
        *(undefined2 *)((longlong)puVar9 + 0x2e) = *(undefined2 *)(lVar1 + 0x600);
        *(undefined2 *)(puVar9 + 6) = *(undefined2 *)(lVar1 + 0x602);
        *(undefined8 **)(lVar1 + 0x10e8) = puVar9;
      }
      *(undefined8 *)(param_2 + 0xc) = puVar9[6];
      uVar2 = *(undefined4 *)puVar9;
      uVar3 = *(undefined4 *)((longlong)puVar9 + 4);
      uVar4 = *(undefined4 *)(puVar9 + 1);
      uVar5 = *(undefined4 *)((longlong)puVar9 + 0xc);
      uVar10 = puVar9[2];
      uVar6 = puVar9[3];
      uVar7 = puVar9[5];
      *(undefined8 *)(param_2 + 8) = puVar9[4];
      *(undefined8 *)(param_2 + 10) = uVar7;
      *(undefined8 *)(param_2 + 4) = uVar10;
      *(undefined8 *)(param_2 + 6) = uVar6;
      *param_2 = uVar2;
      param_2[1] = uVar3;
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      iVar8 = local_2c;
    }
  }
LAB_180200deb:
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

