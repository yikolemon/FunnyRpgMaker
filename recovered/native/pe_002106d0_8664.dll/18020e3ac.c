/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020e3ac */

ulonglong FUN_18020e3ac(undefined4 *param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = FUN_1801ce63e(param_2,*param_1);
  uVar4 = 2;
  if (iVar2 == 0) {
    iVar2 = FUN_1801cf0cc(param_2,&DAT_18033b9f0,param_1 + 1);
    if ((iVar2 == 0) && (uVar1 = *(ushort *)(param_1 + 1), (uVar1 | 0x100) == 0x300)) {
      uVar3 = 0x76;
      if (uVar1 == 0x300) {
        uVar3 = 0x94;
      }
      if (uVar3 <= (uint)param_1[2]) {
        if (uVar1 == 0x200) {
          param_1[0x23] = 0;
          *(undefined8 *)(param_1 + 0x21) = 0;
        }
        if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
          uVar3 = FUN_1801ce63e(param_2,*param_1);
          uVar4 = (ulonglong)uVar3;
          if (uVar3 == 0) {
            uVar4 = FUN_1801cec36(param_2,param_1[2],param_1 + 0x28);
            return uVar4;
          }
        }
      }
    }
  }
  return uVar4;
}

