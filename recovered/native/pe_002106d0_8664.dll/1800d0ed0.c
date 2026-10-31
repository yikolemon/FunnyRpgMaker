/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d0ed0 */

longlong * FUN_1800d0ed0(longlong *param_1,longlong *param_2,ushort *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  longlong local_58;
  uint local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar3 = *param_1;
  lVar5 = *(longlong *)(lVar3 + 8);
  uVar6 = 0;
  if (*(char *)(lVar5 + 0x19) == '\0') {
    lVar1 = lVar5;
    do {
      lVar5 = lVar1;
      bVar7 = *(ushort *)(lVar5 + 0x1a) < *param_3;
      if (*(ushort *)(lVar5 + 0x1a) == *param_3) {
        bVar7 = *(byte *)(lVar5 + 0x1c) < (byte)param_3[1];
      }
      if (bVar7 == false) {
        lVar3 = lVar5;
      }
      lVar1 = *(longlong *)(lVar5 + (ulonglong)bVar7 * 0x10);
    } while (*(char *)(lVar1 + 0x19) == '\0');
    uVar6 = bVar7 ^ 1;
  }
  if (*(char *)(lVar3 + 0x19) == '\0') {
    bVar7 = *(ushort *)(lVar3 + 0x1a) <= *param_3;
    if (*param_3 == *(ushort *)(lVar3 + 0x1a)) {
      bVar7 = *(byte *)(lVar3 + 0x1c) <= (byte)param_3[1];
    }
    if (bVar7) {
      uVar4 = 0;
      goto code_r0x0001800d0fd3;
    }
  }
  if (param_1[1] == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180053f28();
  }
  FUN_1800d101c(local_48,param_1);
  uVar2 = local_40;
  local_40 = 0;
  FUN_18006117a(local_48);
  local_58 = lVar5;
  local_50 = uVar6;
  lVar3 = FUN_180053dd8(param_1,&local_58,uVar2);
  uVar4 = 1;
code_r0x0001800d0fd3:
  *param_2 = lVar3;
  *(undefined1 *)(param_2 + 1) = uVar4;
  return param_2;
}

