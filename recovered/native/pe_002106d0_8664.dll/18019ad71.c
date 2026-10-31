/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ad71 */

longlong FUN_18019ad71(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  uVar1 = FUN_18019ad16(*(undefined4 *)(param_2 + 0x18),param_3,param_4);
  plVar2 = (longlong *)FUN_1800ff88e(*(longlong *)(param_1 + 0x2b0) + 0xd8,uVar1,0);
  if (*plVar2 != 0) {
    return *plVar2;
  }
  if (((*(byte *)(param_2 + 0x10) & 8) != 0) || (*(char *)(param_1 + 0x50) == '\x01')) {
    lVar3 = FUN_180198aae(param_1,param_2,param_3,param_4);
    if (lVar3 != 0) {
      return lVar3;
    }
    if (*(char *)(param_1 + 0x50) != '\0') {
      return 0;
    }
  }
  lVar3 = FUN_180198551(param_1,param_2,param_3,param_4,uVar1);
  *plVar2 = lVar3;
  return lVar3;
}

