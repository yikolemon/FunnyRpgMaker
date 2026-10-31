/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014fd58 */

int FUN_14014fd58(longlong *param_1)

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
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_138;
  local_110 = 0;
  puVar3 = (undefined8 *)FUN_140152f50();
  iVar5 = 0;
  if (puVar3 == (undefined8 *)0x0) goto LAB_14014fe42;
  uVar1 = *(undefined8 *)(*param_1 + 0x98);
  lVar2 = *(longlong *)(*param_1 + 0x3e0);
  puVar4 = (undefined8 *)FUN_140128a1f(uVar1,0x808,&local_110);
  if (local_110 == 0) {
    FUN_140152fa3(lVar2 + 0x5e0,local_10c);
    local_110 = (*(code *)*puVar3)(uVar1,local_10c,puVar4);
    if (local_110 != 0) goto LAB_14014fdf3;
    lVar7 = (ulonglong)*(uint *)(lVar2 + 0x8a8) << 3;
    do {
      if (lVar7 == 0) {
        *(undefined8 **)param_1[7] = puVar4;
        *(undefined4 *)(param_1 + 8) = 0xffffffff;
        iVar5 = 0;
        goto LAB_14014fe42;
      }
      FUN_140152fa3(*(undefined8 *)(lVar2 + 0x8a8 + lVar7),local_10c);
      local_110 = (*(code *)*puVar3)(uVar1,local_10c,(longlong)puVar4 + lVar7);
      lVar7 = lVar7 + -8;
    } while (local_110 == 0);
LAB_14014fdf8:
    for (uVar6 = (ulonglong)*(uint *)(lVar2 + 0x8a8); uVar6 != 0; uVar6 = uVar6 - 1) {
      FUN_140128b39(uVar1,puVar4[uVar6]);
      puVar4[uVar6] = 0;
    }
    FUN_140128b39(uVar1,*puVar4);
    *puVar4 = 0;
  }
  else {
LAB_14014fdf3:
    if (puVar4 != (undefined8 *)0x0) goto LAB_14014fdf8;
    puVar4 = (undefined8 *)0x0;
  }
  FUN_140128b39(uVar1,puVar4);
  iVar5 = local_110;
LAB_14014fe42:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_138)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_138);
}

