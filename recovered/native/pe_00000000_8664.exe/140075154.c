/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140075154 */

undefined8 FUN_140075154(undefined8 param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  longlong lVar3;
  
  FUN_140075244();
  psVar2 = *(short **)param_2;
  lVar3 = *(longlong *)(param_2 + 8);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    psVar1 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      psVar1 = psVar2;
    }
    if (*psVar1 != 0x2e) {
      FUN_1400168f8(param_1,CONCAT62((int6)((ulonglong)psVar2 >> 0x10),0x2e));
      psVar2 = *(short **)param_2;
      lVar3 = *(longlong *)(param_2 + 8);
    }
  }
  if (*(ulonglong *)(param_2 + 0xc) < 8) {
    psVar2 = param_2;
  }
  FUN_140016bfa(param_1,psVar2,lVar3);
  return param_1;
}

