/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015da98 */

ulonglong FUN_14015da98(undefined4 *param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = FUN_14012d612(param_2,*param_1);
  uVar4 = 2;
  if (iVar2 == 0) {
    iVar2 = FUN_14012e0a0(param_2,&DAT_140e9fd60,param_1 + 1);
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
          uVar3 = FUN_14012d612(param_2,*param_1);
          uVar4 = (ulonglong)uVar3;
          if (uVar3 == 0) {
            uVar4 = FUN_14012dc0a(param_2,param_1[2],param_1 + 0x28);
            return uVar4;
          }
        }
      }
    }
  }
  return uVar4;
}

