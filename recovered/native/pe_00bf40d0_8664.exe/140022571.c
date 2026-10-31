/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140022571 */

ulonglong FUN_140022571(longlong *param_1,int param_2,uint *param_3,uint *param_4,
                       undefined1 *param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [36];
  int local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  uVar2 = FUN_140020e0f(param_1,&local_4c);
  uVar4 = (ulonglong)local_4c;
  if ((local_4c == 0) && (uVar4 = 2, uVar2 == 0x74797031)) {
    uVar1 = FUN_140020aa5(param_1,&local_4c);
    uVar4 = (ulonglong)local_4c;
    if (local_4c == 0) {
      uVar4 = FUN_140020a93((longlong)param_1,6);
      if ((int)uVar4 == 0) {
        *param_5 = 0;
        if (uVar1 != 0) {
          uVar2 = (uint)uVar1;
          local_54 = -1;
          do {
            local_50 = uVar2;
            uVar2 = FUN_140020e0f(param_1,&local_4c);
            uVar4 = (ulonglong)local_4c;
            if (local_4c != 0) goto LAB_1400226d5;
            uVar4 = FUN_140020a93((longlong)param_1,4);
            if ((int)uVar4 != 0) goto LAB_1400226d5;
            uVar3 = FUN_140020e0f(param_1,&local_4c);
            *param_3 = uVar3;
            uVar4 = (ulonglong)local_4c;
            if (local_4c != 0) goto LAB_1400226d5;
            uVar3 = FUN_140020e0f(param_1,&local_4c);
            *param_4 = uVar3;
            uVar4 = (ulonglong)local_4c;
            if (local_4c != 0) goto LAB_1400226d5;
            if (uVar2 == 0x54595031) {
              *param_3 = *param_3 + 0x18;
              *param_4 = *param_4 - 0x18;
              *param_5 = 0;
LAB_1400226ae:
              if (-1 < param_2) {
                local_54 = local_54 + 1;
                goto LAB_1400226b6;
              }
LAB_1400226d3:
              uVar4 = 0;
              goto LAB_1400226d5;
            }
            if (uVar2 == 0x43494420) {
              *param_3 = *param_3 + 0x16;
              *param_4 = *param_4 - 0x16;
              *param_5 = 1;
              goto LAB_1400226ae;
            }
LAB_1400226b6:
            if ((-1 < param_2) && (local_54 == param_2)) goto LAB_1400226d3;
            uVar2 = local_50 - 1;
          } while (uVar2 != 0);
        }
        uVar4 = 0x8e;
      }
    }
  }
LAB_1400226d5:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_78)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_78);
}

