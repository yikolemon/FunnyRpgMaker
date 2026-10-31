/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10051c02 */

bool __thiscall FUN_10051c02(undefined4 *param_1,int *param_2)

{
  char *pcVar1;
  int *unaff_FS_OFFSET;
  bool bVar2;
  undefined1 local_54 [28];
  undefined1 local_38 [24];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a9c0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  pcVar1 = (char *)*param_1;
  if (pcVar1 == (char *)*param_2) {
    if (pcVar1 == (char *)0x0) {
      bVar2 = true;
    }
    else if (*pcVar1 == '\x02') {
      bVar2 = param_1[2] == param_2[2];
    }
    else if (*pcVar1 == '\x01') {
      bVar2 = param_1[1] == param_2[1];
    }
    else {
      bVar2 = param_1[3] == param_2[3];
    }
    *unaff_FS_OFFSET = local_1c;
    return bVar2;
  }
  FUN_10001f66("cannot compare iterators of different containers");
  local_14 = 0;
  FUN_10051cd6(local_54,0xd4,local_38,pcVar1);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_54,&DAT_1036082c);
}

