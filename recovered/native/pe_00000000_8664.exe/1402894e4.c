/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402894e4 */

void FUN_1402894e4(undefined8 param_1,longlong *param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_68 [56];
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  uVar2 = (ulonglong)*param_3;
  if (uVar2 == 0xffffffff) {
    lVar1 = *param_2;
    uVar2 = (ulonglong)(uint)((int)param_2[1] - (int)lVar1);
  }
  else {
    lVar1 = *param_2;
    if ((ulonglong)(param_2[1] - lVar1) < uVar2) {
      FUN_140213362(local_30,"nterForNewLine");
      FUN_1402897fa(local_68,local_30);
                    /* WARNING: Subroutine does not return */
      FUN_14047ea80(local_68,0x1405b7910);
    }
  }
  FUN_1402896f8(param_1,lVar1,uVar2);
  return;
}

