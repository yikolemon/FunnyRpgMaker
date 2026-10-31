/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005b9e8 */

ulonglong FUN_14005b9e8(uint *param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar3 = FUN_140020a41((longlong)param_2,*param_1);
  uVar6 = 2;
  if ((int)uVar3 == 0) {
    iVar2 = FUN_1400214cf(param_2,0x1400f8b20,(longlong)(param_1 + 1));
    if ((iVar2 == 0) && (uVar1 = (ushort)param_1[1], (uVar1 | 0x100) == 0x300)) {
      uVar5 = 0x76;
      if (uVar1 == 0x300) {
        uVar5 = 0x94;
      }
      if (uVar5 <= param_1[2]) {
        if (uVar1 == 0x200) {
          param_1[0x23] = 0;
          param_1[0x21] = 0;
          param_1[0x22] = 0;
        }
        if ((param_1[0x12] & 1) == 0) {
          uVar4 = FUN_140020a41((longlong)param_2,*param_1);
          uVar6 = uVar4 & 0xffffffff;
          if ((int)uVar4 == 0) {
            uVar6 = FUN_140021039(param_2,param_1[2],(longlong *)(param_1 + 0x28));
            return uVar6;
          }
        }
      }
    }
  }
  return uVar6;
}

