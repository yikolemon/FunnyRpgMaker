/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020066c */

int FUN_18020066c(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_138 [40];
  int local_110;
  undefined1 local_10c [196];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_138;
  local_110 = 0;
  puVar3 = (undefined8 *)FUN_180203864();
  iVar5 = 0;
  if (puVar3 == (undefined8 *)0x0) goto LAB_180200756;
  uVar1 = *(undefined8 *)(*param_1 + 0x98);
  lVar2 = *(longlong *)(*param_1 + 0x3e0);
  puVar4 = (undefined8 *)FUN_1801c9a4b(uVar1,0x808,&local_110);
  if (local_110 == 0) {
    FUN_1802038b7(lVar2 + 0x5e0,local_10c);
    local_110 = (*(code *)*puVar3)(uVar1,local_10c,puVar4);
    if (local_110 != 0) goto LAB_180200707;
    lVar7 = (ulonglong)*(uint *)(lVar2 + 0x8a8) << 3;
    do {
      if (lVar7 == 0) {
        *(undefined8 **)param_1[7] = puVar4;
        *(undefined4 *)(param_1 + 8) = 0xffffffff;
        iVar5 = 0;
        goto LAB_180200756;
      }
      FUN_1802038b7(*(undefined8 *)(lVar2 + 0x8a8 + lVar7),local_10c);
      local_110 = (*(code *)*puVar3)(uVar1,local_10c,(longlong)puVar4 + lVar7);
      lVar7 = lVar7 + -8;
    } while (local_110 == 0);
LAB_18020070c:
    for (uVar6 = (ulonglong)*(uint *)(lVar2 + 0x8a8); uVar6 != 0; uVar6 = uVar6 - 1) {
      FUN_1801c9b65(uVar1,puVar4[uVar6]);
      puVar4[uVar6] = 0;
    }
    FUN_1801c9b65(uVar1,*puVar4);
    *puVar4 = 0;
  }
  else {
LAB_180200707:
    if (puVar4 != (undefined8 *)0x0) goto LAB_18020070c;
    puVar4 = (undefined8 *)0x0;
  }
  FUN_1801c9b65(uVar1,puVar4);
  iVar5 = local_110;
LAB_180200756:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_138)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_138);
}

