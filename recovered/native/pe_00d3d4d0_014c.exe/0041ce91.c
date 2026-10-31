/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041ce91 */

undefined4 __cdecl FUN_0041ce91(undefined4 *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  if (param_2 != (byte *)0x0 && param_1 != (undefined4 *)0x0) {
    pbVar1 = (byte *)*param_1;
    while (pbVar1 != (byte *)0x0) {
      uVar2 = FUN_00493010(pbVar1,param_2);
      if (uVar2 == 0) {
        return param_1[1];
      }
      pbVar1 = (byte *)param_1[2];
      param_1 = param_1 + 2;
    }
  }
  return 0;
}

