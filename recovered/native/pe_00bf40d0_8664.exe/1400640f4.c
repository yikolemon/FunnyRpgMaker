/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400640f4 */

int FUN_1400640f4(longlong *param_1,undefined8 *param_2,char *param_3,int *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStackY_98 [32];
  int local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  local_54 = 0;
  local_50 = *(undefined8 *)(param_3 + 0x10);
  FUN_140064448((longlong)param_1,param_3);
  if ((int)param_1[1] == 0) {
    *(undefined1 *)((longlong)param_1 + 0x134) = 0;
    cVar2 = *(char *)((longlong)param_1 + 0x101);
    plVar1 = param_1 + 0x16;
    FUN_14006479d((longlong)plVar1);
    FUN_1400647b1(param_1,param_2,plVar1,&local_50,'\0',0,0,&local_54);
    if ((int)param_1[1] == 0) {
      if ((cVar2 != '\0') && ((int)param_1[0x1a] < 0)) {
        *(undefined1 *)((longlong)param_1 + 0x134) = 1;
        FUN_14006479d((longlong)plVar1);
        FUN_1400647b1(param_1,param_2,plVar1,&local_50,'\0',0,0,&local_54);
        if ((int)param_1[1] != 0) goto LAB_1400641a7;
      }
      FUN_1400670f9((longlong)plVar1);
    }
  }
LAB_1400641a7:
  *param_4 = local_54;
  FUN_140067118((int *)(param_1 + 1),0);
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_98);
  }
  return (int)param_1[1];
}

