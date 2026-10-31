/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012de12 */

void FUN_18012de12(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_58 [32];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  ulonglong local_20;
  
  lVar5 = DAT_180419160;
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  if ((*(uint *)(DAT_180419160 + 0x30) & 2) == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = *(byte *)(DAT_180419160 + 0x34) & 1;
  }
  if ((((*(uint *)(DAT_180419160 + 0x30) & 1) == 0) ||
      (cVar6 = FUN_180118b8a(0x20e,0,0xffffffff), cVar6 == '\0')) &&
     ((bVar7 == 0 ||
      (cVar6 = FUN_180118b8a((uint)*(byte *)(lVar5 + 0x79) * 2 + 0x27b,0,0xffffffff), cVar6 == '\0')
      ))) goto LAB_18012e035;
  if ((*(byte *)(lVar5 + 0x2acc) & 0x10) != 0) {
    FUN_1800fdfea("[nav] NavUpdateCancelRequest()\n");
  }
  if (*(int *)(lVar5 + 0x167c) != 0) {
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
      FUN_180107456();
      return;
    }
    goto LAB_18012e051;
  }
  if (*(int *)(lVar5 + 0x220c) == 0) {
    lVar2 = *(longlong *)(lVar5 + 0x2200);
    if ((((lVar2 == 0) || (lVar2 == *(longlong *)(lVar2 + 0x418))) ||
        (lVar3 = *(longlong *)(lVar2 + 0x438), (*(byte *)(lVar3 + 0x17) & 4) != 0)) ||
       (lVar4 = *(longlong *)(lVar3 + 0x408), lVar4 == 0)) {
      iVar1 = *(int *)(lVar5 + 0x2148);
      if (((0 < (longlong)iVar1) &&
          (lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x2150) + -0x30 + (longlong)iVar1 * 0x38),
          lVar3 != 0)) && ((*(byte *)(lVar3 + 0x17) & 8) == 0)) {
        if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
          FUN_18011b0d8(iVar1 + -1,1);
          return;
        }
        goto LAB_18012e051;
      }
      cVar6 = *(char *)(lVar5 + 0x7c);
      if (cVar6 == '\0') {
        if ((lVar2 != 0) && (*(char *)(lVar5 + 0x7d) != '\0')) goto LAB_18012dfd7;
LAB_18012e001:
        if (*(char *)(lVar5 + 0x7d) == '\x01') {
          *(undefined4 *)(lVar5 + 0x21f8) = 0;
          goto LAB_18012e011;
        }
      }
      else {
        if (lVar2 != 0) {
LAB_18012dfd7:
          if ((*(byte *)(lVar2 + 0x17) & 4) != 0) {
            *(undefined4 *)(lVar2 + 0x450) = 0;
            cVar6 = *(char *)(lVar5 + 0x7c);
          }
          if (cVar6 == '\0') goto LAB_18012e001;
        }
        *(undefined4 *)(lVar5 + 0x21f8) = 0;
        if (*(char *)(lVar5 + 0x7d) == '\x01') {
LAB_18012e011:
          if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
            FUN_1801080ec(0,0);
            return;
          }
          goto LAB_18012e051;
        }
      }
LAB_18012e035:
      if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
        return;
      }
      goto LAB_18012e051;
    }
    FUN_1801080ec(lVar4,0);
    fVar8 = (float)*(undefined8 *)(lVar3 + 0x60);
    fVar9 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x60) >> 0x20);
    fStack_30 = (float)*(undefined8 *)(lVar4 + 0x168);
    local_38 = fVar8 - fStack_30;
    fStack_2c = (float)((ulonglong)*(undefined8 *)(lVar4 + 0x168) >> 0x20);
    fStack_34 = fVar9 - fStack_2c;
    fStack_30 = ((float)*(undefined8 *)(lVar3 + 0x68) + fVar8) - fStack_30;
    fStack_2c = ((float)((ulonglong)*(undefined8 *)(lVar3 + 0x68) >> 0x20) + fVar9) - fStack_2c;
    FUN_18011bfef(*(undefined4 *)(lVar3 + 0xcc),0,0);
  }
  else {
    FUN_18012ea7c(0);
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    FUN_18011bf57();
    return;
  }
LAB_18012e051:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

