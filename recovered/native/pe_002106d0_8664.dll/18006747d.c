/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006747d */

void FUN_18006747d(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  undefined1 local_30 [8];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  local_38 = param_2;
  if (param_1 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3;
    if (((*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) * 0x6db6db6db6db6db7 +
         lVar6 * -0x21cfb2b78c13521d == 0) && (param_2 < (ulonglong)(lVar6 * 0x21cfb2b78c13521d))) {
      FUN_18006719a(param_4,local_30,&local_40,&local_38);
      if (local_28 == '\0') {
LAB_1800675f0:
        puVar4 = (undefined8 *)&DAT_1803861e4;
LAB_1800675f7:
        FUN_180061ed8(puVar4);
      }
      else {
        iVar1 = *(int *)(*(longlong *)(local_40 + 0x20) + 0x34 + local_38 * 0x38);
        if (iVar1 != 2) {
          if (iVar1 == 1) {
            lVar5 = *(longlong *)(local_40 + 0x20) + local_38 * 0x38;
            lVar6 = *(longlong *)(lVar5 + 0x18);
            if (((ulonglong)((*(longlong *)(lVar5 + 0x20) - lVar6 >> 3) * -0x71c71c71c71c71c7) <=
                 param_3) ||
               (puVar4 = *(undefined8 **)(lVar6 + 0x18 + param_3 * 0x48),
               puVar4 == *(undefined8 **)(lVar6 + 0x20 + param_3 * 0x48))) goto LAB_1800675f0;
            if (0xf < (ulonglong)puVar4[3]) {
              puVar4 = (undefined8 *)*puVar4;
            }
          }
          else {
            if (iVar1 != 0) {
              iVar3 = iVar1 >> 0x1f;
              iVar2 = iVar1 / 10000 + iVar3;
              lVar5 = (longlong)(iVar1 + (iVar2 - iVar3) * -10000);
              lVar6 = FUN_180061eb4((iVar2 - iVar3) + -1);
              goto LAB_180067638;
            }
            lVar6 = *(longlong *)(*(longlong *)(local_40 + 0x38) + 0xa0 + local_38 * 0x1a8);
            if ((ulonglong)
                (*(longlong *)(*(longlong *)(local_40 + 0x38) + 0xa8 + local_38 * 0x1a8) - lVar6 >>
                5) <= param_3) goto LAB_1800675f0;
            lVar5 = param_3 * 0x20;
            if (*(ulonglong *)(lVar6 + 0x18 + lVar5) < 0x10) {
              puVar4 = (undefined8 *)(lVar6 + lVar5);
            }
            else {
              puVar4 = *(undefined8 **)(lVar6 + lVar5);
            }
          }
          goto LAB_1800675f7;
        }
        lVar5 = local_38 - 1;
        lVar6 = local_40;
LAB_180067638:
        FUN_18006747d(lVar6,lVar5,param_3,param_4);
      }
      if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_68)) {
        return;
      }
      goto LAB_180067664;
    }
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_68)) {
    FUN_180061ed8(&DAT_1803861e4);
    return;
  }
LAB_180067664:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
}

