/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102669e8 */

/* WARNING: Removing unreachable block (ram,0x10266a03) */
/* Library Function - Single Match
    public: void __thiscall __crt_stdio_input::scanset_buffer<unsigned char>::set(unsigned char)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __thiscall
__crt_stdio_input::scanset_buffer<unsigned_char>::set
          (scanset_buffer<unsigned_char> *this,uchar param_1)

{
  this[param_1 >> 3] =
       (scanset_buffer<unsigned_char>)((byte)this[param_1 >> 3] | (byte)(1 << (param_1 & 7)));
  return;
}

