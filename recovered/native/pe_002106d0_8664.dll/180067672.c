/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180067672 */

void FUN_180067672(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
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
    lVar6 = *(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 4;
    if (((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3) * -0x71c71c71c71c71c7
         + lVar6 * 0x79435e50d79435e5 == 0) && (param_2 < (ulonglong)(lVar6 * -0x79435e50d79435e5)))
    {
      FUN_18006719a(param_4,local_30,&local_40,&local_38);
      if (local_28 == '\0') {
LAB_1800677de:
        puVar4 = &DAT_1803861e4;
LAB_1800677e5:
        FUN_180061ed8(puVar4);
      }
      else {
        iVar1 = *(int *)(*(longlong *)(local_40 + 0x28) + 0x44 + local_38 * 0x48);
        if (iVar1 != 2) {
          if (iVar1 == 1) {
            lVar6 = *(longlong *)(local_40 + 0x28) + local_38 * 0x48;
            lVar5 = *(longlong *)(lVar6 + 0x28);
            if (((ulonglong)(*(longlong *)(lVar6 + 0x30) - lVar5 >> 6) <= param_3) ||
               (lVar6 = *(longlong *)(lVar5 + 0x28 + param_3 * 0x40),
               lVar6 == *(longlong *)(lVar5 + 0x30 + param_3 * 0x40))) goto LAB_1800677de;
            if (*(ulonglong *)(lVar6 + 0x20) < 0x10) {
              puVar4 = (undefined1 *)(lVar6 + 8);
            }
            else {
              puVar4 = *(undefined1 **)(lVar6 + 8);
            }
          }
          else {
            if (iVar1 != 0) {
              iVar3 = iVar1 >> 0x1f;
              iVar2 = iVar1 / 10000 + iVar3;
              lVar5 = (longlong)(iVar1 + (iVar2 - iVar3) * -10000);
              lVar6 = FUN_180061eb4((iVar2 - iVar3) + -1);
              goto LAB_180067826;
            }
            lVar6 = *(longlong *)(*(longlong *)(local_40 + 0x48) + 0x58 + local_38 * 0x130);
            if ((ulonglong)
                ((*(longlong *)(*(longlong *)(local_40 + 0x48) + 0x60 + local_38 * 0x130) - lVar6 >>
                 3) * -0x3333333333333333) <= param_3) goto LAB_1800677de;
            if (*(ulonglong *)(lVar6 + 0x20 + param_3 * 0x28) < 0x10) {
              puVar4 = (undefined1 *)(lVar6 + param_3 * 0x28 + 8);
            }
            else {
              puVar4 = *(undefined1 **)(lVar6 + 8 + param_3 * 0x28);
            }
          }
          goto LAB_1800677e5;
        }
        lVar5 = local_38 - 1;
        lVar6 = local_40;
LAB_180067826:
        FUN_180067672(lVar6,lVar5,param_3,param_4);
      }
      if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_68)) {
        return;
      }
      goto LAB_18006785d;
    }
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_68)) {
    FUN_180061ed8(&DAT_1803861e4);
    return;
  }
LAB_18006785d:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
}

