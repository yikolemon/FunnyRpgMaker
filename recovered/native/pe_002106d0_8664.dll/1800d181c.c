/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d181c */

longlong * FUN_1800d181c(longlong *param_1,longlong *param_2,ushort *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  longlong local_58;
  uint local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  lVar6 = *(longlong *)(lVar1 + 8);
  uVar7 = 0;
  lVar4 = lVar1;
  if (*(char *)(lVar6 + 0x19) == '\0') {
    lVar2 = lVar6;
    do {
      lVar6 = lVar2;
      bVar8 = *(ushort *)(lVar6 + 0x20) < *param_3;
      if (*(ushort *)(lVar6 + 0x20) == *param_3) {
        bVar8 = *(byte *)(lVar6 + 0x22) < (byte)param_3[1];
      }
      if (bVar8 == false) {
        lVar4 = lVar6;
      }
      lVar2 = *(longlong *)(lVar6 + (ulonglong)bVar8 * 0x10);
    } while (*(char *)(lVar2 + 0x19) == '\0');
    uVar7 = bVar8 ^ 1;
  }
  if (*(char *)(lVar4 + 0x19) == '\0') {
    bVar8 = *(ushort *)(lVar4 + 0x20) <= *param_3;
    if (*param_3 == *(ushort *)(lVar4 + 0x20)) {
      bVar8 = *(byte *)(lVar4 + 0x22) <= (byte)param_3[1];
    }
    if (bVar8) {
      *(undefined8 *)(lVar4 + 0x38) = param_4[2];
      uVar3 = param_4[1];
      *(undefined8 *)(lVar4 + 0x28) = *param_4;
      *(undefined8 *)(lVar4 + 0x30) = uVar3;
      uVar5 = 0;
      goto code_r0x0001800d1935;
    }
  }
  if (param_1[1] == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180053f28();
  }
  FUN_1800d197e(local_48,param_1,lVar1,param_3,param_4);
  uVar3 = local_40;
  local_40 = 0;
  FUN_1800d1a2a(local_48);
  local_58 = lVar6;
  local_50 = uVar7;
  lVar4 = FUN_180053dd8(param_1,&local_58,uVar3);
  uVar5 = 1;
code_r0x0001800d1935:
  *param_2 = lVar4;
  *(undefined1 *)(param_2 + 1) = uVar5;
  return param_2;
}

