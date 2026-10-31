/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027e90c */

ulonglong FUN_18027e90c(longlong *param_1,ulonglong param_2,int param_3)

{
  ulonglong in_RAX;
  longlong lVar1;
  uint uVar2;
  
  if ((((param_3 != 2) &&
       (in_RAX = (ulonglong)*(uint *)((longlong)param_1 + 0x14),
       (*(uint *)((longlong)param_1 + 0x14) & 0x4c0) != 0)) &&
      (in_RAX = (ulonglong)*(uint *)((longlong)param_1 + 0x14),
      (*(uint *)((longlong)param_1 + 0x14) & 6) == 0)) && (0 < (int)param_1[2])) {
    uVar2 = *(uint *)(param_1 + 3);
    in_RAX = (longlong)(int)uVar2 >> 6;
    if ((-1 < *(char *)((&DAT_180421400)[in_RAX] + 0x38 + (ulonglong)(uVar2 & 0x3f) * 0x48)) &&
       (*(char *)((&DAT_180421400)[in_RAX] + 0x39 + (ulonglong)(uVar2 & 0x3f) * 0x48) == '\0')) {
      if (param_3 == 0) {
        in_RAX = FUN_180297664(uVar2,0,1);
        if ((longlong)in_RAX < 0) goto LAB_18027e9f4;
        lVar1 = in_RAX - (longlong)(int)param_1[2];
        in_RAX = param_2 - lVar1;
        uVar2 = -(int)((longlong)param_2 >> 0x3f);
        param_2 = in_RAX;
        if ((uVar2 != -(int)(lVar1 >> 0x3f)) && (uVar2 != 0x7fffffffffffffff < in_RAX))
        goto LAB_18027e9f4;
      }
      if ((param_1[1] - *param_1 <= (longlong)param_2) &&
         ((longlong)param_2 <= (longlong)(int)param_1[2])) {
        *param_1 = *param_1 + param_2;
        *(int *)(param_1 + 2) = (int)param_1[2] - (int)param_2;
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
LAB_18027e9f4:
  return in_RAX & 0xffffffffffffff00;
}

