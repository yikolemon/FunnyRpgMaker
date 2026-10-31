/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044e905 */

undefined8 __fastcall FUN_0044e905(uint *param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 in_EAX;
  int iVar3;
  size_t sVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  
  bVar2 = (char)*param_1 + 0xbf;
  uVar5 = CONCAT31((int3)((uint)in_EAX >> 8),bVar2);
  if (bVar2 < 0x1a) {
    iVar3 = 0;
    while ((((byte)(*(char *)((int)param_1 + iVar3 + 1) + 0xbfU) < 0x1a &&
            ((byte)(*(char *)((int)param_1 + iVar3 + 2) + 0xbfU) < 0x1a)) &&
           ((byte)(*(char *)((int)param_1 + iVar3 + 3) + 0xbfU) < 0x1a))) {
      if (((0x19 < (byte)(*(char *)((int)param_1 + iVar3 + 4) + 0xbfU)) ||
          (0x19 < (byte)(*(char *)((int)param_1 + iVar3 + 5) + 0xbfU))) ||
         ((*(char *)((int)param_1 + iVar3 + 6) != '+' ||
          (iVar1 = iVar3 + 7, iVar3 = iVar3 + 7,
          0x19 < (byte)(*(char *)((int)param_1 + iVar1) + 0xbfU))))) break;
    }
    uVar5 = 0;
    if (iVar3 != 0) {
      sVar4 = _strlen((char *)((int)param_1 + iVar3));
      uVar6 = FUN_004878c0(param_1,(uint *)((int)param_1 + iVar3),sVar4 + 1);
      param_2 = (undefined4)(uVar6 >> 0x20);
      uVar5 = (undefined4)uVar6;
    }
  }
  return CONCAT44(param_2,uVar5);
}

