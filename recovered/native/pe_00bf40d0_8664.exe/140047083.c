/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140047083 */

ulonglong FUN_140047083(longlong param_1,undefined8 param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  uVar3 = FUN_140020a41((longlong)plVar1,param_3);
  if ((int)uVar3 == 0) {
    iVar2 = FUN_140021063(plVar1,param_4);
    uVar3 = CONCAT44(extraout_var,iVar2);
    if (iVar2 == 0) {
      *(longlong *)(param_1 + 0x108) = plVar1[7];
      *(longlong *)(param_1 + 0x110) = plVar1[8];
      uVar3 = 0;
    }
  }
  return uVar3;
}

