/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012f142 */

ulonglong FUN_14012f142(undefined8 param_1,int param_2,int *param_3,int *param_4,undefined1 *param_5
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
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  iVar3 = FUN_14012d9e0(param_1,&local_4c);
  uVar5 = (ulonglong)local_4c;
  if ((local_4c == 0) && (uVar5 = 2, iVar3 == 0x74797031)) {
    uVar2 = FUN_14012d676(param_1,&local_4c);
    uVar5 = (ulonglong)local_4c;
    if (local_4c == 0) {
      uVar5 = FUN_14012d664(param_1,6);
      if ((int)uVar5 == 0) {
        *param_5 = 0;
        if (uVar2 != 0) {
          local_54 = -1;
          uVar1 = (uint)uVar2;
          do {
            local_50 = uVar1;
            iVar3 = FUN_14012d9e0(param_1,&local_4c);
            uVar5 = (ulonglong)local_4c;
            if (local_4c != 0) goto LAB_14012f2a6;
            uVar5 = FUN_14012d664(param_1,4);
            if ((int)uVar5 != 0) goto LAB_14012f2a6;
            iVar4 = FUN_14012d9e0(param_1,&local_4c);
            *param_3 = iVar4;
            uVar5 = (ulonglong)local_4c;
            if (local_4c != 0) goto LAB_14012f2a6;
            iVar4 = FUN_14012d9e0(param_1,&local_4c);
            *param_4 = iVar4;
            uVar5 = (ulonglong)local_4c;
            if (local_4c != 0) goto LAB_14012f2a6;
            if (iVar3 == 0x54595031) {
              *param_3 = *param_3 + 0x18;
              *param_4 = *param_4 + -0x18;
              *param_5 = 0;
LAB_14012f27f:
              if (-1 < param_2) {
                local_54 = local_54 + 1;
                goto LAB_14012f287;
              }
LAB_14012f2a4:
              uVar5 = 0;
              goto LAB_14012f2a6;
            }
            if (iVar3 == 0x43494420) {
              *param_3 = *param_3 + 0x16;
              *param_4 = *param_4 + -0x16;
              *param_5 = 1;
              goto LAB_14012f27f;
            }
LAB_14012f287:
            if ((-1 < param_2) && (local_54 == param_2)) goto LAB_14012f2a4;
            uVar1 = local_50 - 1;
          } while (local_50 - 1 != 0);
        }
        uVar5 = 0x8e;
      }
    }
  }
LAB_14012f2a6:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_78)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
}

