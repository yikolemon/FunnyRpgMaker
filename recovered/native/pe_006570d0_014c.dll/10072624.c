/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10072624 */

undefined4 FUN_10072624(int *param_1)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  int local_30;
  int local_2c [3];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2860;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_30 = param_1[1] - *param_1;
  FUN_10076b48(local_2c,&local_30);
  local_14 = 0;
  uVar1 = FUN_1007e904(local_2c);
  if ((char)uVar1 != '\0') {
    if (param_1[3] == -1) {
      DAT_1039cbc8 = 0;
    }
    else {
      DAT_1039cbc8 = *(char *)(local_2c[0] + param_1[3]) == 'U';
    }
  }
  local_14 = 0xffffffff;
  FUN_10004eae();
  *unaff_FS_OFFSET = local_1c;
  return uVar1;
}

