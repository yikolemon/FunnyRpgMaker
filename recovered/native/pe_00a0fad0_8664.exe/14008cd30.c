/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008cd30 */

ulonglong FUN_14008cd30(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  size_t _Size;
  undefined7 uVar3;
  ulonglong uVar2;
  void *local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  _Size = param_1[1] - (longlong)*param_1;
  iVar1 = memcmp((void *)*param_1,(void *)*param_2,_Size);
  uVar3 = (undefined7)((ulonglong)param_2 >> 8);
  if (iVar1 == 0) {
    uVar2 = CONCAT71(uVar3,1);
  }
  else if (*(int *)(param_1 + 3) == -1) {
    uVar2 = 0;
  }
  else {
    local_48 = (void *)0x0;
    lStack_40 = 0;
    local_38 = 0;
    FUN_14005872a(&local_48,_Size,param_1,param_1 + 1);
    *(undefined1 *)((longlong)local_48 + (longlong)*(int *)(param_1 + 3)) = 0x55;
    iVar1 = memcmp(local_48,(void *)*param_2,lStack_40 - (longlong)local_48);
    uVar2 = CONCAT71(uVar3,iVar1 == 0);
    FUN_140016e5c(&local_48);
  }
  return uVar2 & 0xffffffff;
}

