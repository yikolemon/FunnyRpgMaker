/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001e39e */

void FUN_18001e39e(longlong param_1,longlong param_2,ushort param_3,char param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    uVar3 = param_3;
    if ((param_3 == 0xffff) && (uVar3 = 0x107, uVar4 == 0x5f)) {
      if (param_4 == '\0') {
code_r0x00018001e3ff:
        puVar2 = *(undefined8 **)(param_2 + 0x28);
        if (puVar2 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)FUN_180239630(0x20);
          puVar2[2] = 0;
          puVar2[3] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 **)(param_2 + 0x28) = puVar2;
        }
        pbVar1 = (byte *)((longlong)puVar2 + (uVar4 >> 3 & 0x1fffffff));
        *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar4 & 7);
      }
    }
    else if ((bool)param_4 !=
             ((*(ushort *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x18) + uVar4 * 2)
              & uVar3) != 0)) goto code_r0x00018001e3ff;
    uVar4 = uVar4 + 1;
    if (uVar4 == 0x100) {
      return;
    }
  } while( true );
}

