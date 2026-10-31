/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d016e */

ulonglong FUN_1801d016e(undefined8 param_1,int param_2,int *param_3,int *param_4,undefined1 *param_5
                       )

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [36];
  int local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  iVar3 = FUN_1801cea0c(param_1,&local_4c);
  uVar5 = (ulonglong)local_4c;
  if ((local_4c == 0) && (uVar5 = 2, iVar3 == 0x74797031)) {
    uVar2 = FUN_1801ce6a2(param_1,&local_4c);
    uVar5 = (ulonglong)local_4c;
    if (local_4c == 0) {
      uVar5 = FUN_1801ce690(param_1,6);
      if ((int)uVar5 == 0) {
        *param_5 = 0;
        if (uVar2 != 0) {
          local_54 = -1;
          uVar1 = (uint)uVar2;
          do {
            local_50 = uVar1;
            iVar3 = FUN_1801cea0c(param_1,&local_4c);
            uVar5 = (ulonglong)local_4c;
            if (local_4c != 0) goto LAB_1801d02d2;
            uVar5 = FUN_1801ce690(param_1,4);
            if ((int)uVar5 != 0) goto LAB_1801d02d2;
            iVar4 = FUN_1801cea0c(param_1,&local_4c);
            *param_3 = iVar4;
            uVar5 = (ulonglong)local_4c;
            if (local_4c != 0) goto LAB_1801d02d2;
            iVar4 = FUN_1801cea0c(param_1,&local_4c);
            *param_4 = iVar4;
            uVar5 = (ulonglong)local_4c;
            if (local_4c != 0) goto LAB_1801d02d2;
            if (iVar3 == 0x54595031) {
              *param_3 = *param_3 + 0x18;
              *param_4 = *param_4 + -0x18;
              *param_5 = 0;
LAB_1801d02ab:
              if (-1 < param_2) {
                local_54 = local_54 + 1;
                goto LAB_1801d02b3;
              }
LAB_1801d02d0:
              uVar5 = 0;
              goto LAB_1801d02d2;
            }
            if (iVar3 == 0x43494420) {
              *param_3 = *param_3 + 0x16;
              *param_4 = *param_4 + -0x16;
              *param_5 = 1;
              goto LAB_1801d02ab;
            }
LAB_1801d02b3:
            if ((-1 < param_2) && (local_54 == param_2)) goto LAB_1801d02d0;
            uVar1 = local_50 - 1;
          } while (local_50 - 1 != 0);
        }
        uVar5 = 0x8e;
      }
    }
  }
LAB_1801d02d2:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_78)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
}

