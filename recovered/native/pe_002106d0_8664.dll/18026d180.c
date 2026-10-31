/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026d180 */

ulonglong FUN_18026d180(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  
  if (DAT_180420d48 < 1) {
    return 0;
  }
  DAT_180420d48 = DAT_180420d48 + -1;
  uVar2 = FUN_18023d7f0();
  if (DAT_180418078 == 2) {
    uVar5 = uVar2;
    FUN_18023d9f0();
    FUN_18026d4d0();
    FUN_18026d560();
    DAT_180418078 = 0;
    FUN_18023d840(uVar2);
    bVar3 = FUN_18023d8b0(param_1,0,param_3,param_4,uVar5);
    FUN_18023da30();
    return (ulonglong)bVar3;
  }
  FUN_180246a40(7);
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

