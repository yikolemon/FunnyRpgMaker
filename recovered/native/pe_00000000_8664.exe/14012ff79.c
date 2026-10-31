/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012ff79 */

int FUN_14012ff79(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *param_1;
  lVar3 = FUN_1401303c0(uVar1,param_3,&DAT_140ecc34c);
  if (lVar3 == 0) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = FUN_1401304b9(param_1,lVar3,param_5);
    if (iVar2 == 0) {
      *param_4 = lVar3;
      iVar2 = 0;
    }
    else {
      FUN_140128b39(uVar1,lVar3);
    }
  }
  return iVar2;
}

