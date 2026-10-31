/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140007310 */

undefined8 *
FUN_140007310(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  *param_1 = std::
             wstring_convert<std::codecvt_utf8_utf16<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>
             ::vftable;
  puVar5 = param_1;
  uVar1 = FUN_1400d4020(1);
  param_1[3] = uVar1;
  puVar3 = puVar5 + 4;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0xf;
  puVar4 = puVar5 + 8;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 7;
  *(undefined2 *)(puVar5 + 0xd) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x6a) = 0;
  puVar2 = (undefined8 *)FUN_1400d3680(0x40);
  FUN_140007a52(puVar2,0,param_3,param_4,puVar3,puVar4,puVar2,puVar5,uVar6);
  *puVar2 = std::codecvt_utf8_utf16<wchar_t,1114111,0>::vftable;
  FUN_1400077f4(puVar5,puVar2);
  return puVar5;
}

